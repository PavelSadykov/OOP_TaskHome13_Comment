//
//  комментарии кода.cpp
//  OOP ДЗ 13 комменты кода поиска
//
//  Created by Павел on 19.01.2023.
//



//class DataManager {
//
//public:
// // map
//    // <key, value> key == it->first
//    // <key, value>
//    // <key, value>
//    // <key, value>
//value == it->second

// Контейнер STL MAP  это ключ и значение. Чтобы обратиться к ключу или значению, мы обращаемся через итератор:
// ключ - key == it->first,  значение - value== it->second

//    Метод для поиска самого встречающегося значения ключа в векторе _keys
//    int mostSearchedKey() {

//        Создаем unordered map : keyAmount
//        std::unordered_map<int, int> keyAmount;

//       Запускаем цикл for в пределах размера вектора _keys
//        for (size_t i = 0; i < _keys.size(); i++) {
//
//       Начиная с 0 элемента, достаем из вектора _keys  ключ и  пытаемся делать вставку в keyAmount.
//       insert возвращает пару.  const auto& [it,- это итератор , он указывает на тот
//       элемент(пару) который мы вставили или указывает на элемент который мы не смогли вставить.
//       isInserted -вставили или нет (тип булеан, возвращает true or false)]
//      const auto& [it, isInserted] = keyAmount.insert({keys[i], 1 });
//
// например : _keys[0] {1,1}вставка произошла, _keys[1] {1,1}вставка не произошла
//
//            }
//        }
//
//            }
//        }
//Если вставка не произошла, то
//if (!isInserted) {
//
//     Значение мапы достаем из _keys : так как там уже лежит число (1) , то  мы его и достаем
//    int value = it->second;

//    Увеличиваем значение
//    value++;

//    Записываем значение  обратно по этому адресу, квадратные скобки гарантированно сделают вставку.
//    И в текущем моменте можно увидеть, что число встретилось более одного раза
//    keyAmount[_keys[i]] = value;


//      создаем  пару которая будет хранить  в себе ключ и самое большое значение популярных чисел
//        std::pair<int, int> key_biggestValue = {0,0};

//       Запускаем цикл и ищем самый большой элемент  в keyAmount
//        for (std::unordered_map<int, int>::const_iterator it =keyAmount.begin();
//        it != keyAmount.end(); it++) {
//

//   Если значение в паре key_biggestValue меньше,  чем IT -> SECOND 
//   if (key_biggestValue.second < it->second) {


//                получаем искомое  key_biggestValue в виде пары : ключ и значение
//                  key_biggestValue = std::make_pair(it->first,it->second);

//        возвращаем самый  популярный ключ
//        return key_biggestValue.first;
//    }
//
//private:
//    В привате храним вектор _keys в котором записаны  обращения к ключам
//    std::vector<int> _keys = { 1,1,2,2,4,2,6,7,7,7,2 };
//};
