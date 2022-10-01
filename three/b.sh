echo "Enter the limit: "
read n
i=1
echo "The odd numbers till $n are: "
while [ $i -le $n ]
do 
echo $i  
i=`expr $i + 2`
done
