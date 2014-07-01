/**********************************************************************************************************************
 * @file    NamespaceableNode.hpp
 * @date    2014-06-29
 * @brief   <# Brief Description#>
 * @details <#Detailed Description#>
 **********************************************************************************************************************/

#pragma once

#include "NameableNode.hpp"
#include "Namespace.hpp"

namespace rambler { namespace XML {

    class NamespaceableNode : public NameableNode {
    public:
        NamespaceableNode() = default;
        NamespaceableNode(Type type);
        NamespaceableNode(String name, Type type);
        NamespaceableNode(Namespace xmlnamespace, String name, Type type);

        Namespace getNamespace() const;
        String getQualifiedName() const;

        virtual bool operator < (NamespaceableNode const & other) const;
    protected:
        Namespace const xmlnamespace;
    };
    
}}