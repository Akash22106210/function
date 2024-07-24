def check_scope():
    def do_local():
        test="do local"
    def do_non_local():
        nonlocal test
        test="do non local"
    def do_global():
        global test
        test="do global"
    test="akash"
    do_local()
    print("testing done on"+test)
    do_non_local()
    print("after doing non local testing:"+test)
    do_global()
    print("after doing global testing:"+test)
    

check_scope() 
print("after doing global testing:"+test)

    ##inner functions are local
##while do local ad check_scope called 
## value of test= akash but noy do_local
    

            
