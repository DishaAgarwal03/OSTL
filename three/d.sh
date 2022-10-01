echo "Enter a number: "
read n
f=1; i=2
while [ $i -le $n ]
do
f=`expr $f \* $i`
i=`expr $i + 1`
done
echo "The factorial of $n is $f"
