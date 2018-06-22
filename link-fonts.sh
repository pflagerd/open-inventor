#! /bin/sh -e

fontpath=share/inventor/fonts
type1=/usr/share/fonts/X11/Type1

mkdir -p $fontpath
cd $fontpath

ln -s -f $type1/c0419bt_.pfb  Courier-Regular
ln -s -f $type1/c0582bt_.pfb  Courier-Italic
ln -s -f $type1/c0583bt_.pfb  Courier-Bold
ln -s -f $type1/c0611bt_.pfb  Courier-BoldItalic
ln -s -f $type1/c059013l.pfb  Century-Schoolbook-Roman
ln -s -f $type1/c059016l.pfb  Century-Schoolbook-Bold
ln -s -f $type1/c059033l.pfb  Century-Schoolbook-Italic
ln -s -f $type1/c059036l.pfb  Century-Schoolbook-BoldItalic


for i in $type1/*.pfa; do
    test -f $i || continue
    out=.`egrep ^/FontName $i | cut -d' ' -f2`
    #echo "Linking $i to $out"
    if [ ! -e $out ]; then
	ln -s -f $i $out
    fi
done

# make sure the fallback font is available
if [ ! -e Utopia-Regular ]; then
    ln -s -f Century-Schoolbook-Roman Utopia-Regular
fi
