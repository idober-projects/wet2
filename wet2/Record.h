#ifndef WET2_RECORD_H
#define WET2_RECORD_H


class Record {
private:
    int m_id;
    int m_num_of_records;
    int m_column;
    int m_height;
    int m_num_of_purchase;
public:
    Record():m_id(0),m_num_of_records(0),m_column(0),m_height(0),m_num_of_purchase(0){}
    Record(int r_id,int record_stocks ):Record(){
        m_id = r_id;
        m_num_of_records = record_stocks;
    }

    ~Record() = default;

};


#endif //WET2_RECORD_H
