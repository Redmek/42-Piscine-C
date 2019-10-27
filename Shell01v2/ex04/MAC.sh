ifconfig | grep ether | sed "s/ether//" | sed 's/ //g' | tr -d "\t"
