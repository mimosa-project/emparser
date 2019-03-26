#pragma once

#include <cstddef>
#include <iostream>
#include <utility>
#include <map>
#include <memory>

class PositionMap {
public:
    typedef std::pair<size_t, size_t> PositionType;
    typedef std::map<PositionType, PositionType> PositionMapType;
    typedef std::shared_ptr<PositionMap> ptr;

    PositionMap() {}
    virtual ~PositionMap() {}

    void set_position(const PositionType& before_pos, const PositionType& after_pos) {
        map_[after_pos] = before_pos;
    }

    bool is_pos_exist(const PositionType& after_pos) const {
        PositionMapType::const_iterator it = map_.find(after_pos);
        return it != map_.end();
    }

    const PositionType& get_before_pos(const PositionType& after_pos) const {
        PositionMapType::const_iterator it = map_.find(after_pos);
        return it->second;
    }

    void dump_all() const {
        for (const auto& item : map_) {
            std::cout << "(" << item.second.first << "," << item.second.second
            << ") -> (" << item.first.first << "," << item.first.second << ")\n";
        }
        std::cout << std::endl;
    }
    
private:
    PositionMapType map_;
};
