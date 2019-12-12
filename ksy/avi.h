#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"

#include <stdint.h>
#include <memory>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class avi_t : public kaitai::kstruct {

public:

    enum size_type_t {
        SIZE_TYPE_FLOAT = 132,
        SIZE_TYPE_DOUBLE = 136
    };

    avi_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, avi_t* p__root = nullptr);
    void _read();
    ~avi_t();

private:
    std::string m_magic;
    size_type_t m_protocol;
    float m_value4;
    bool n_value4;

public:
    bool _is_null_value4() { value4(); return n_value4; };

private:
    double m_value8;
    bool n_value8;

public:
    bool _is_null_value8() { value8(); return n_value8; };

private:
    avi_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::string magic() const { return m_magic; }
    size_type_t protocol() const { return m_protocol; }
    float value4() const { return m_value4; }
    double value8() const { return m_value8; }
    avi_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};
