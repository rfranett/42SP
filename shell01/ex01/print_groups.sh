#!/bin/bash                                                                     
id -Gn $FT_USER | tr -t " " "," | tr -d '\n'
