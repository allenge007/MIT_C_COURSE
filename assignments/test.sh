for file in assn*.pdf assn*.zip; do
  folder=$(echo $file | grep -o 'assn[0-9]\+')
  mkdir -p $folder
  mv $file $folder/
done