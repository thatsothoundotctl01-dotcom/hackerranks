#include <bits/stdc++.h>
using namespace std;
// Class 
class Product {
public:
    string code; 
    string name;
    int quantity;
    double price;

    // Default 
    Product() {
        code = "";
        name = "";
        quantity = 0;
        price = 0.0;
    }

    // parameter
    Product(string c, string n, int q, double p) {
        code = c;
        name = n;
        quantity = q;
        price = p;
    }
};

class StockManager {
private:
    vector<Product> products;

     // product code 
     // if p.code  != code  
     // left  and exit program
    bool codeLeft(string code) {
        for (const auto& p : products) {
            if (p.code == code) return true;
        }
        return false;
    }

public:
    void addProduct() {
        string name;
        int qty;
        double price;
        string code;

        // auto gen
        do {
            int coderan = 10000 + rand() % 90000;
            code = to_string(coderan);
        } while (codeLeft(code));

        cin.ignore();  // clear 
        cout << "Product Name: ";
        getline(cin, name);

        cout << "Quantity: ";
        cin >> qty;

        cout << "Price: $";
        cin >> price;

        // psuh all item of product 
        products.push_back(Product(code, name, qty, price));
        cout << "Product  Code: " << code << endl ; 
    }

    void removeProduct() {
        string code;
        cout << "\nEnter Product Code: ";
        cin >> code;

        // auto data type 
        for (auto PR = products.begin(); PR != products.end(); PR++) {
            if (PR->code == code) {
                products.erase(PR); 
                cout << "Product Removed "<<endl ; 
                return;
            }
        }
        cout << "Product Not Found!"<<endl; 
    }

    void restockProduct() {
        string code;
        int amount;

        cout << "\nEnter Product Code: ";
        cin >> code;

        // vector loop 
        for (auto& p : products) {
            if (p.code == code) {
                cout << "Add Quantity: ";
                cin >> amount;
                p.quantity += amount;
                cout << "Stock Updated!"<<endl; 
                return;
            }
        }
        cout << "Product Not Found!"<<endl; 
    }

    void sellProduct() {
        string code;
        int amount;

        cout << "\nEnter Product Code: ";
        cin >> code;

        // use auto data type 
        for (auto& p : products) {
            if (p.code == code) {
                cout << "Quantity Sold: ";
                cin >> amount;


                if (amount > p.quantity) {
                    cout << "Not Enough Stock!"<<endl; 
                    return;
                }
                 // qty of product - ammount 
                p.quantity -= amount;
                cout << "Sale Success !"<<endl; 
                return;
            }
        }
        cout << "Product Not Found!"<<endl ; 
    }

    void searchProduct() {
        string code;
        cout << "\nEnter Product Code: ";
        cin >> code;

        for (auto& p : products) {
            if (p.code == code) {
                cout << "\n--- Product Found ---"
                     << "\nProuduct Code:     " << p.code
                     << "\nName:     " << p.name
                     << "\nQuantity: " << p.quantity
                     << "\nPrice:    $" << fixed << setprecision(2) << p.price << endl; 
                return;
            }
        }
        cout << "Product Not Found!"<<endl; 
    }

    void listProducts() {
        if (products.empty()) {
            cout << "\nProduct not Available !"<<endl; 
            return ; 
        }

        cout << "\n" << left
             << setw(15) << "Product Code"
             << setw(20) << "Name"
             << setw(15) << "Quantity"
             << setw(15) << "Price" << endl; 
        cout << string(60, '-') << endl; 

        int totalQty = 0;
        double totalVal = 0.0;

        for (auto& p : products) {
            cout << left
                 << setw(15) << p.code
                 << setw(20) << p.name
                 << setw(15) << p.quantity
                 << "$" << fixed << setprecision(2) << p.price << endl ;

            totalQty += p.quantity;
            totalVal += (p.quantity * p.price);
        }

        cout << string(60, '-') << "\n";
        cout << left
             << setw(35) << "Total Item "
             << setw(15) << totalQty
             << "$" << fixed << setprecision(2) << totalVal << endl;
        cout << string(60, '-') << endl;
    }

    void saveFile() {
        ofstream file("stock.txt");
        for (auto& p : products) {
            file << p.code << "|" << p.name << "|" << p.quantity << "|" << p.price << endl;
        }
        file.close();
        cout << "Saved Successfully!"<<endl; 
    }

    void loadFile() {
        ifstream file("stock.txt");
        if (!file.is_open()) {
            cout << " file not  found !"<<endl; 
            return;
        }

        products.clear();
        string code, name, qtyStr, priceStr;

        while (getline(file, code, '|') &&
               getline(file, name, '|') &&
               getline(file, qtyStr, '|') &&
               getline(file, priceStr)) {

            int qty = stoi(qtyStr);
            double price = stod(priceStr);
            products.push_back(Product(code, name, qty, price));
        }
        file.close();
        cout << "Loaded Successfully!"<<endl; 
    }
};

void menu() {
    cout << "\n========================================\n"
         << "         STOCK MANAGEMENT SYSTEM\n"
         << "========================================\n"
         << "1. Add Product       2. Remove Product\n"
         << "3. Restock Product   4. Sell Product\n"
         << "5. Search Product    6. List Products\n"
         << "7. Save To File      8. Load From File\n"
         << "9. Exit\n"
         << "========================================\n"
         << "Option : ";
}

int main() {
    srand(time(NULL)); 
 
    StockManager s;
    int op;
    

    do {
        menu();
        cin >> op;

        switch (op) {
            case 1: s.addProduct();
             break;
            case 2: s.removeProduct();
             break; 
            case 3: s.restockProduct();
             break;
            case 4: s.sellProduct();
             break;
            case 5: s.searchProduct();
             break;
            case 6: s.listProducts();
             break;
            case 7: s.saveFile(); 
            break;
            case 8: s.loadFile();
             break;
            case 9: cout << "\nThank You !"<<endl; 
             break;
            default: cout << "\nInvalid Choice!"<<endl ; 
        }
    } while (op != 0);

   
    return 0;
}

