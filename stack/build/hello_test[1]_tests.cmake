add_test( ArrayStack.TestFuncions /home/robert/my_project/stack/build/hello_test [==[--gtest_filter=ArrayStack.TestFuncions]==] --gtest_also_run_disabled_tests)
set_tests_properties( ArrayStack.TestFuncions PROPERTIES WORKING_DIRECTORY /home/robert/my_project/stack/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( hello_test_TESTS ArrayStack.TestFuncions)
