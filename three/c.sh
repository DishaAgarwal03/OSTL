echo "Enter the value of a, b and c: "
read a; read b; read c
d=`expr $b \* $b \- 4 \* $a \* $c`
case $d in 
0)
echo "The roots are the same"
;;
-*)
echo "The roots are unequal and imaginary"
;;
*)
echo "The roots are unequal and real"
;;
esac
