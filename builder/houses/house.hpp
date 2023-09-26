#ifndef DESIGN_PATTERNS_BUILDER_HOUSES_HOUSE_HPP
#define DESIGN_PATTERNS_BUILDER_HOUSES_HOUSE_HPP

class House {
public:
    bool walls_ = false;
    bool doors_ = false;
    bool windows_ = false;
    bool roof_ = false;
    bool pool_ = false;
    bool garden_ = false;
};

#endif // DESIGN_PATTERNS_BUILDER_HOUSES_HOUSE_HPP