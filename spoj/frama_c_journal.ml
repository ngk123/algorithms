(* Frama-C journal generated at 09:26 the 24/10/2014 *)

exception Unreachable
exception Exception of string

(* Run the user commands *)
let run () =
  Dynamic.Parameter.Int.set "-slevel" 10;
  Dynamic.Parameter.Bool.set "-val" true;
  Kernel.Files.set [ "first.c" ];
  begin try
    (* exception Log.AbortError("kernel") raised on:  *)
    !Db.Value.compute ();
    raise Unreachable
  with
  | Unreachable as exn -> raise exn
  | exn (* Log.AbortError("kernel") *) ->
    (* continuing: *) raise (Exception (Printexc.to_string exn))
  end

(* Main *)
let main () =
  Journal.keep_file "frama_c_journal.ml";
  try run ()
  with
  | Unreachable -> Kernel.fatal "Journal reachs an assumed dead code" 
  | Exception s -> Kernel.log "Journal re-raised the exception %S" s
  | exn ->
    Kernel.fatal
      "Journal raised an unexpected exception: %s"
      (Printexc.to_string exn)

(* Registering *)
let main : unit -> unit =
  Dynamic.register
    ~plugin:"Frama_c_journal"
    "main"
    (Datatype.func Datatype.unit Datatype.unit)
    ~journalize:false
    main

(* Hooking *)
let () = Cmdline.run_after_loading_stage main; Cmdline.is_going_to_load ()
