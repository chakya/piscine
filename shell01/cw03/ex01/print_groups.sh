#!/bin/bash
id -Gn $FT_User | tr " " "," | tr -d '\n'