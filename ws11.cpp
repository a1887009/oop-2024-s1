#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// vector of int.
// used to store the records
typedef vector<int> Records;

// https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}
    void read(Records &records) {
    
            // _file.open(_filename, ios::in);
        try{
            _file.open(_filename, ios::in);
            if (!_file.is_open()){
                throw runtime_error(" Error in file");
            }
            if (_file.is_open()) {
            string line;
            while (std::getline(_file, line)) {
                // try stoi if fails then catch and throw
                try {
                    records.push_back(stoi(line));
                }catch (const std::invalid_argument& e){
                    throw runtime_error("Invalid argument");
                    _file.close();
                    // std::cerr << "Invalid argument" << std::endl;
                    break;
                }catch (const std::out_of_range& e){
                    // std::cerr << "Out of range" << std::endl;
                    throw runtime_error("Out of range");
                    _file.close();
                    break;
                }

            }
            _file.close();
        }
        } catch (...){
            _file.close();
            throw;
        }

        //_file.open(_filename, ios::in);
        
    }
};

int main() {
        
        // RecordsManager receordM("test_clean.txt");
        // RecordsManager receordM("test_corrupt1.txt");
        RecordsManager receordM("test_corrupt1.txt");
        Records myRecords;

        // reads records
        try {
            receordM.read(myRecords);
       
            // calculate and print out the sum
            int sum = 0;
            for (int i = 0; i < myRecords.size(); i++) {
                sum += myRecords[i];
            }
            cout << sum << endl;
        }
        catch(const exception &e)
        {
            std::cerr << "Error occurred:" << e.what() << std::endl;
        }
    return 0;
}