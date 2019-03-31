#include<iostream>
using nasmespace std;
class DATE{
	int DD,MM,YY;
	public:
		DATE(){
			cout << "Enter the date : \n";
			while(1){
				hrs = min = 0;
				ch = '\0';
		string t;
        cout << "Enter the Time (HH : MM : SS) " << endl;
        cin >> t;
        stringstream sst(t);
        sst>>hrs>>ch>>min;
//     	display();
        if(sst.fail()){
			cout <<"Invalid time Format. \n";
			continue;
		}
		if(ch != ':'){
        	cout <<"Invalid Time Format. \n";
        	continue;
		}
        
		if((int)hrs > 12 || (int)min > 60){
            cout << "Invalid time\n";
        	continue;
        }	
		if(flag == 1)
			break;
	}
}
};
