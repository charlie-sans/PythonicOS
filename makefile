all :
	mkdir output
	cd cpp
	make
	cp gui ../output
	cd ../
	cd python 
	make
	cp PythonicOS ../output
	cd ../
	cd output
	./main 
	
clean :
	cd cpp && make clean
	cd ../
	cd python && make clean
	cd ../

	rm -rf output
