# convert $1.png -modulate 100,200,100 $1_s.png
cp $1.png $1_s.png
convert $1_s.png $1.gif
convert $1.gif -resize 16x16 $1_16.gif
convert $1_16.gif $1_16.png
python rgb.py $1_16.txt $1_16.png
# convert $1_16.gif -quality 100 $1_16.jpg
# python rgb.py $1_16.txt $1_16.jpg

cat $1_16.txt | pbcopy