# importing the modules  
from threading import *           
import time
# creating thread instance where count = 3  
my_obj = Semaphore(4)          
    
# creating instance  
def show(the_name):  

      # calling acquire method  
    my_obj.acquire()                  
    for n in range(3):  
        print('SEMAPHORE, ', end = '')  
        time.sleep(1)  
        print(the_name)  
            
        # calling release method  
        my_obj.release()      
            
# creating multiple thread   
thread_1 = Thread(target = show, args = ('Thread 1 \n',))  
thread_2 = Thread (target = show, args = ('Thread 2\n',))  
thread_3 = Thread (target = show, args = ('Thread 3\n',))  

# calling the threads   
thread_1.start()  
thread_2.start()  
thread_3.start()  
