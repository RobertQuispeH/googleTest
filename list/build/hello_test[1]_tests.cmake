add_test( LinkenList.testFuncion /home/robert/my_project/list/build/hello_test [==[--gtest_filter=LinkenList.testFuncion]==] --gtest_also_run_disabled_tests)
set_tests_properties( LinkenList.testFuncion PROPERTIES WORKING_DIRECTORY /home/robert/my_project/list/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( hello_test_TESTS LinkenList.testFuncion)
