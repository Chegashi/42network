#! /bin/sh
curl $1 2> /dev/null | grep '<a' | cut -f 2 -d '"'