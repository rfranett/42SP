#!/bin/bash

FT_LINE1=5
FT_LINE2=10
export FT_LINE1
export FT_LINE2

awk -F: '!/#/ && NR%2==0 {print $1}' /etc/passwd | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | paste -sd ', ' - | sed 's/$/./'
