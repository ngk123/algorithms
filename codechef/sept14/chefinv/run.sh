g++ test.cpp -o b.out
./b.out > in 
echo "1st"
g++ sol2.cpp -o c.out
./c.out < in > out1
echo "2"
g++ sol.cpp
./a.out < in > out2
echo "3"
diff out1 out2
