echo "1st"
g++ 7.cpp 
echo "2"
./a.out < chefinv/inV > out1
echo "3"
g++ chefinv/brute.cpp -o b.out 
echo "4"
./b.out < chefinv/inV > outV
echo "5"
diff out1 outV