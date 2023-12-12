#!/bin/bash

# Loop from 1 to 20
for i in {1..12}; do
    filename="./com/$i.com"  # Generate the file name
    logpath="./log/$i.log"
    command="g16 $filename $logpath"  # Construct the command
    echo "Executing: $command"
    $command
done

# End of the script
echo "All commands executed"
