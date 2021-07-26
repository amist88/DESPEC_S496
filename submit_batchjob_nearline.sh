#!/bin/bash
##Read in list of files to run
#LISTFILE="files_list_f039.txt"
LISTFILE="file_list.txt"
declare -a size
while IFS= read -r line
do
    size+=($line)
done < "$LISTFILE"

##Submit job
sbatch -J S496_nearline -D /lustre/gamma/DESPEC_S496_NEARLINE/ -o logs/go4_%A_%a.out.log -e logs/go4_%A_%a.err.log \
--time=8:00:00 --mem-per-cpu=4G --array=0-${#size[@]}:1 -- ./Cluster_Submission/go4_launcher_nearline.sh

