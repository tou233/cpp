semaphore chopstick[5] = {1, 1, 1, 1, 1}; 

void philosopher(int i) { 
    while (true) {
        think(); 
        
        if (i % 2 == 1) { 
          
            P(chopstick[i]); 
            P(chopstick[(i + 1) % 5]);  
        } else {
          
            P(chopstick[(i + 1) % 5]); 
            P(chopstick[i]); 
        }
        
        eat(); 
        
        V(chopstick[i]); 
        V(chopstick[(i + 1) % 5]); 
    }
}