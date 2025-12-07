#include "speedywagon.h"

namespace speedywagon {

bool connection_check(pillar_men_sensor* man){
    if (!man) 
        return false; 
    else {
        return true;
    }
}

int activity_counter(pillar_men_sensor sensor_array[], int size) {
		int count = 0;
		if (sensor_array != nullptr) {
			for (int i= 0; i < size; ++i) {
                //std::cout << sensor_array[i].activity << std::endl;
				count += sensor_array[i].activity++;
			}
		}
		return count;
	}

bool alarm_control(pillar_men_sensor* man){
    if (!man) 
        return false;
    else {
        if (man->activity > 0) return true;
        else return false;
    }
}

bool uv_alarm(pillar_men_sensor* man){
    if (!man) 
        return false;
    else {
        return uv_light_heuristic(&(man->data)) > man->activity ? true : false; 
    }
}

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon
