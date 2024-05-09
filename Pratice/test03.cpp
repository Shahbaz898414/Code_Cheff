#include <iostream>
#include <vector>

using namespace std;

class Guest {
private:
    int age;
public:
    Guest(int _age) : age(_age) {}

    int getAge() const {
        return age;
    }
};

class Ticket {
private:
    vector<Guest> guests;
    int totalPrice;
public:
    Ticket() : totalPrice(0) {}

    void addGuest(const Guest& guest) {
        guests.push_back(guest);
        calculatePrice(guest.getAge());
    }

    void calculatePrice(int age) {
        if (age <= 2)
            totalPrice += 0;
        else if (age < 18)
            totalPrice += 100;
        else if (age < 60)
            totalPrice += 500;
        else
            totalPrice += 300;
    }

    void displayTicket() const {
        cout << "Ticket Details:" << endl;
        for (size_t i = 0; i < guests.size(); ++i) {
            cout << "Guest " << i+1 << " (age: " << guests[i].getAge() << ")" << endl;
        }
        cout << "Total Price: INR " << totalPrice << endl;
    }
};

int main() {
    Ticket ticket;

    
    int numGuests;
    
    cin >> numGuests;

    for (int i = 0; i < numGuests; ++i) {
        int age;
        
        cin >> age;
        ticket.addGuest(Guest(age));
    }

    ticket.displayTicket();


    cout << "\nSecurity Check:\n";
    ticket.displayTicket();

    return 0;
}
