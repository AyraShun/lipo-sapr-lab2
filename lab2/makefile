mode=$1
if [ "$mode" == -test ]; then
	g++ Macros.cpp Test.cpp MacrosTest.cpp -o run_test.out -lpcrecpp
	./run_test.out < test.log
	rm -f run_test.out
fi

if [ "$mode" == -build ]; then
	g++ main.cpp Macros.cpp -o parse_log_file.out -lpcrecpp
fi

if [ "$mode" == -compare ]; then
	bash scrypt.sh < "$2" > macros_result
	g++ main.cpp Macros.cpp -o parse_log_file.out -lpcrecpp
	./parse_log_file.out < "$2" > cpp_result
	if diff cpp_result macros_result; then
		echo "Results coincide"
		rm -f macros_result
		rm -f cpp_result
	else
		echo "Results different"
	fi
	rm -f parse_log_file.out
fi

if [ "$mode" == -clean ]; then
	rm -f macros_result
	rm -f cpp_result
	rm -f run_test.out
	rm -f parse_log_file.out
fi

exit 0