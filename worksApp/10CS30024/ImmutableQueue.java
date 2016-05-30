package jp.co.worksap.global;
import java.util.NoSuchElementException;
import java.util.Stack;


public class ImmutableQueue<E> {

    int size;
    private IStack<E> bwd;
    private IStack<E> fwd;
    public ImmutableQueue(){
        bwd = new StackConst<E>();
        fwd = new StackConst<E>();
        size =0;
    }
	
	public E peek() { if(size ==0) throw new NoSuchElementException();
    else return fwd.Peek();
    }

    public int size(){
        return size;
    }

    private ImmutableQueue(IStack<E> f, IStack<E> b,int s)
    {
        if(f.IsEmpty()){
            f = b.Reverse();
            b = new StackConst<E>();
        }
        fwd = f;
        bwd = b;
        size =s;
    }

    public ImmutableQueue<E> enqueue(E value){
        if(value==null){
            throw new IllegalArgumentException("e");
        }
        return new ImmutableQueue<E>(fwd, bwd.Push(value),size+1);
    }
    public ImmutableQueue<E> dequeue(){
        IStack<E> f = fwd.Pop();
        if (!f.IsEmpty())
            return new ImmutableQueue(f, bwd,size-1);
        else if (bwd.IsEmpty())
        {
            ImmutableQueue ex = new ImmutableQueue();
            return ex;
        }
        else{
            StackConst st = new StackConst();
            return new ImmutableQueue(bwd.Reverse(), st,size-1);
        }
    }
}

interface IStack<E> {
        public IStack<E> Push(E value);
        public IStack<E> Pop();
        public E Peek();
        public int size();
        public boolean IsEmpty();
        public IStack<E> Reverse();
}

public class StackConst<E> implements IStack<E> {

    private IStack<E> tail;
    private E head;
    private int size;

    public StackConst(){
        tail = null;
        head = null;
        size =0;
    }

    private StackConst(E head,IStack<E> tail,int size){
        this.tail = tail;
        this.head = head;
        this.size = size+1;
    }

    public IStack<E> Push(E value) {
        if(value==null){
            throw new IllegalArgumentException("e");
        }
        StackConst s = new StackConst(value,this,size);
        return s;
    }

    public IStack<E> Pop() {
        return tail;
    }

    public E Peek() {
        return head;
    }

    public int size() {
        return size;
    }

    public boolean IsEmpty() {
        if (size>0) return false;
        else return true;
    }

    public IStack<E> Reverse(){
        IStack<E> r =new StackConst();
        for (IStack<E> f = this; !f.IsEmpty(); f = f.Pop())
           r = r.Push(f.Peek());
        return r;
    }
}

