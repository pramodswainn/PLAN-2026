#include <bits/stdc++.h>


using namespace std;

class Singleton{
    private:
            static Singleton* instance;
            static std::mutex mx;
            Singleton(const string str):str1(str){};
            string str1;

    public:
        Singleton(const Singleton&) = delete;
        void operator = (const Singleton&) = delete;

      static  Singleton*  getInstance(const string& str){
        std::lock_guard<std::mutex> lock(mx);
            if(instance  == nullptr){
                instance = new Singleton(str) ;
            }
            
                return instance;
            
        }

        string getVal()const {
            return str1;
        }


};

void threadPhase1(){
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton *ptr = Singleton::getInstance("Thread 1");
    std::cout<<ptr->getVal()<<std::endl;
}


void threadPhase2(){
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* ptr1 = Singleton::getInstance("Thread 2");
    std::cout<<ptr1->getVal()<<std::endl;
}


Singleton* Singleton::instance = nullptr;
mutex Singleton::mx;

int main(){
           // Singleton *ptr = Singleton::getInstance("PRAMOD");
            //cout<< ptr->getVal()<<std::endl;

            std::thread t1(threadPhase1);
            std::thread t2(threadPhase2);

            t1.join();
            t2.join();


    return 0;
}
