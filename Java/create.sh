dir_name=$1
echo $dir_name
mkdir "$dir_name"
cp run.sh "$dir_name"/
cd "$dir_name"
touch Main.java
