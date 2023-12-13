#include"header.h"
#include<bits/stdc++.h>
using namespace std; 
void node::insertlast(int value)
{
    node*ptr,*temp,*temp1;
    ptr=new node();
    if(ptr==NULL)
    {
        cout<<"memory not allocated"<<endl;
    }
    else
    {
        ptr->data=value;
        //temp=head;
        if(head==NULL)
        {
            ptr->next=NULL;
            head=ptr;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
               temp1=temp;
               temp=temp->next;

            }
            temp->next=ptr;
            ptr->next=NULL;
        }
    }
    
}
void mac_LCID_message_UL(int n)
{
   map<int, string> m; //creat map
//  insert the all index with MAC PDU decoder LCID value using spec 36.321 Table 6.2.1-1 for UL-SCH
    m.insert({ 0x00, "CCCH" });
    m.insert({ 0x01, "Logical channel 1" });
    m.insert({ 0x02, "Logical channel 2" });
    m.insert({ 0x03, "Logical channel 3" });
    m.insert({ 0x04, "Logical channel 4" });
    m.insert({ 0x05, "Logical channel 5" });
    m.insert({ 0x06, "Logical channel 6" });
    m.insert({ 0x07, "Logical channel 7" });
    m.insert({ 0x08, "Logical channel 8" });
    m.insert({ 0x09, "Logical channel 9" });
    m.insert({ 0x0A, "Logical channel A" });
    m.insert({ 0x0B, "CCCH" });
    m.insert({ 0x0C, "Reserverd" });
    m.insert({ 0x0D, "Reserverd" });
    m.insert({ 0x0E, "Reserverd" });
    m.insert({ 0x0F, "Reserverd" });
    m.insert({ 0x10, "Reserverd" });
    m.insert({ 0x11, "Reserverd" });
    m.insert({ 0x12, "Reserverd" });
    m.insert({ 0x13, "Reserverd" });
    m.insert({ 0x14, "Reserverd" });
    m.insert({ 0x15, "Reserverd" });
    m.insert({ 0x16, "Truncated Sidelink BSR"});
    m.insert({ 0x17, "Sidelink BSR" });
    m.insert({ 0x18, "Dual Connectivity Power Headroom Report"});
    m.insert ({0x19,"Extended Power Headroom report"});
    m.insert ({0x1A, "Power Headroom Report"});
    m.insert ({0x1B,"C-RNTI"});
    m.insert ({0x1C,"Truncated BSR"});
    m.insert ({0x1D,"Short BSR"});
    m.insert ({0x1E,"Long BSR"});
    m.insert({0x1F,"Padding"});

  
    int s1=n; //copy the input value
    s1=s1&0x1F; //Logical AND with Input and 1F for find LCID value
    cout<<"\n==========================MAC Subheader[0x"<<s1<<"]==================================="<<endl;
   // cout << "----------+----------+----------+----------+----------+----------+ \t"<<n;
      if(m.find(s1)!=m.end()) //check in map LCID value
      {
        
        cout<<n<<"\t LCID value:  "<<m[s1]<<endl;
      }

      else cout<<" : Undefined"<<endl;


}
void mac_LCID_message_DL(int n)
{
   map<int, string> m; //create map 
  //insert the all index with MAC PDU decoder LCID value using spec 36.321 Table 6.2.1-1 for DL_SCH
    m.insert({ 0x00, "CCCH" });
    m.insert({ 0x01, "Logical channel 1" });
    m.insert({ 0x02, "Logical channel 2" });
    m.insert({ 0x03, "Logical channel 3" });
    m.insert({ 0x04, "Logical channel 4" });
    m.insert({ 0x05, "Logical channel 5" });
    m.insert({ 0x06, "Logical channel 6" });
    m.insert({ 0x07, "Logical channel 7" });
    m.insert({ 0x08, "Logical channel 8" });
    m.insert({ 0x09, "Logical channel 9" });
    m.insert({ 0x0A, "Logical channel A" });
    m.insert({ 0x0B, "Reserverd" });
    m.insert({ 0x0C, "Reserverd" });
    m.insert({ 0x0D, "Reserverd" });
    m.insert({ 0x0E, "Reserverd" });
    m.insert({ 0x0F, "Reserverd" });
    m.insert({ 0x10, "Reserverd" });
    m.insert({ 0x11, "Reserverd" });
    m.insert({ 0x12, "Reserverd" });
    m.insert({ 0x13, "Reserverd" });
    m.insert({ 0x14, "Reserverd" });
    m.insert({ 0x15, "Reserverd" });
    m.insert({ 0x16, "Reserverd" });
    m.insert({ 0x17, "Reserverd" });
    m.insert({ 0x18, "Activation/Deactivation (4 Octet)"});
    m.insert ({0x19, "SC-MCCH, SC-MTCH"});
    m.insert ({0x1A, "Long DRX Command"});
    m.insert ({0x1B, "Activation/Deactivation (1 Octet)"});
    m.insert ({0x1C, "UE contention Resoulution Identity"});
    m.insert ({0x1D, "Timing Advance Command"});
    m.insert ({0x1E, "DRX Command"});
    m.insert({0x1F,  "Padding"});

  
    int s1=n;
    s1=s1&0x1F;
    cout<<"\n==========================MAC Subheader[0x"<<s1<<"]==================================="<<endl;
   // cout << "----------+----------+----------+----------+----------+----------+ \t"<<n;
      if(m.find(s1)!=m.end())
      {
        
        cout<<hex<<n<<"\t LCID value:  "<<m[s1]<<endl;
      }

      else cout<<" : Undefined"<<endl;




}
bool e_bit_check(int val)
{
   int num= val;
   //cout<<num<<endl;
   num=num&0x20;
   if(num>0)
   return true;
   else 
   return false;
}
int LCID_value(int val2)
{
    int s=val2;
    s=s&0x1F;
    if(s==0x1F||s==0x1E||s==0x1D||s==0x1c||s==0x1b||s==0x1A)
    {
        return s;
    }
    return 0;
    
}
int F_and_L_check(int val3)
{
    int num=val3;
    num=num&0x80;
    if(num>0)
    {
        cout<<"F bit is high so length of the L field is 15 bit"<<endl;
        return num;
    }
    else
    {
        cout<<"F bit is low so length of the L field is 7 bit"<<endl;
        cout<<dec<<val3<<endl;
        return num;
    }
    
}

void node::decode(bool value)
{
     node *temp;
     temp=head;
     int temp_num;
     
  table:   while(temp!=NULL)
     {
         temp_num=temp->data;
      if(e_bit_check(temp_num))
     {
        if(LCID_value(temp_num)==0x1f||LCID_value(temp_num)==0x1E||LCID_value(temp_num)==0x1D||LCID_value(temp_num)==0x1C||LCID_value(temp_num)==0x1b||LCID_value(temp_num)==0x1A)
        {
            if(value)//changed uplink to value
            mac_LCID_message_UL(temp_num);
            else
            {
                mac_LCID_message_DL(temp_num);
            }
            
            
        }
        else 
        {
            if(value)//changed uplink to value
            {
                mac_LCID_message_UL(temp_num);
            node *temp2;
            temp2=temp->next;
            temp_num=temp2->data;
            F_and_L_check(temp_num);
            temp=temp2->next;
            goto table;
            }
            else 
            {
            mac_LCID_message_DL(temp_num);
            node *temp2;
            temp2=temp->next;
            temp_num=temp2->data;
            F_and_L_check(temp_num);
            temp=temp2->next;
            goto table;

            }
            
        }
        
     }
     else 
     {
        if(LCID_value(temp_num)==0x1f||LCID_value(temp_num)==0x1E||LCID_value(temp_num)==0x1D||LCID_value(temp_num)==0x1C||LCID_value(temp_num)==0x1b||LCID_value(temp_num)==0x1A)
        {
            if(value)//changed uplink to value
            {
             mac_LCID_message_DL(temp_num);
             exit(0); 
            }
            else
            {
            mac_LCID_message_DL(temp_num);
            exit(0);
            }
            
           
        }
        else
        {
            
           mac_LCID_message_DL(temp_num);
           exit(0);
        } 
        //cout<<"NO LCID"<<endl;        
     }
     temp=temp->next;

     }

}
