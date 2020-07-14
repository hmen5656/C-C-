#include <map>
#include <limits>
#include <iostream>
template<typename K, typename V>
class interval_map {
	std::map<K, V> m_map;
public:
	// constructor associates whole range of K with val by inserting (K_min, val)
	// into the map
	interval_map(V const &val) {
		m_map.insert(m_map.end(),
				std::make_pair(std::numeric_limits<K>::lowest(), val));
	}

	void assign(K const &keyBegin, K const &keyEnd, V const &val) {
		if (!(keyBegin < keyEnd))
			return;
		typename std::map<K, V>::iterator iter;
		typename std::map<K, V>::iterator iter2;
		iter = m_map.begin();
		iter2 = m_map.begin();

		if (m_map.size() == 1) {
			std::cout << "eklemeyi yaptim" << std::endl;
			for (K i = m_map.size(); i < keyEnd; i++, ++iter) {
				m_map.insert(iter, std::make_pair(i, val));
			}
		}
		else {
			if (m_map.size() < keyBegin) {
				for (K i = m_map.size(); i < keyBegin; i++) {
					m_map.insert(m_map.end(),
							std::make_pair(i,
									m_map.find(m_map.size() - 1)->second));
				}
				for (K i = keyBegin; i < (keyEnd); i++) {
					m_map.insert(m_map.end(),std::make_pair(i,val));
				};
			}
			else if(keyEnd<=m_map.size()){
				for (K i = 0; i < keyBegin; i++, ++iter) {}
				for (K i = 0; i < keyEnd; i++, ++iter2) {}
				m_map.erase(iter,iter2);
				for (K i = keyBegin; i < keyEnd; i++) {
						m_map.insert(m_map.end(), std::make_pair(i, val));
				}
			}
			else if(keyEnd>m_map.size() && keyBegin<m_map.size()){
				for (K i = 0; i < keyBegin; i++, ++iter) {}
				m_map.erase(iter,m_map.end());
				for (K j = keyBegin; j < keyEnd; j++) {
					m_map.insert(m_map.end(), std::make_pair(j, val));
				}

			}
		}
	}
	void insert(K key, V value) {
		m_map.insert(m_map.end(), std::make_pair(key, value));
	}
	V const& operator[](K const &key) const {
		return (--m_map.upper_bound(key))->second;
	}
	void print() {
		typename std::map<K, V>::iterator itr = m_map.begin();
		for (itr = m_map.begin(); itr != m_map.end(); ++itr) {
			std::cout << '\t' << itr->first << '\t' << itr->second << '\n';
		}
		std::cout << std::endl;
	}
	int get_size() {
		return m_map.size();
	}
};
int main() {
	interval_map<unsigned int, char> mymap(5);
	mymap.assign(0, 6, 'a');
	//std::cout << mymap.get_size() << std::endl;
	//std::cout << mymap[45] << std::endl;
	mymap.print();
	mymap.assign(56, 150, 'b');
	std::cout << "after adding 56 to 100 value of 67" << std::endl;
	mymap.print();
	mymap.assign(78, 100, 't');
	mymap.print();
	mymap.assign(110, 130, 'c');
	mymap.print();
	mymap.assign(140, 190, 'x');
	mymap.print();
	mymap.assign(200,256,'o');
	mymap.print();
	return 0;
}
