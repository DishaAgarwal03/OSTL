echo "Enter a number"
read c
if [ `expr $c \% 2` -eq 0 ] 
then 
echo "$c is an even number"
else 
echo "$c is a odd number"
fi
