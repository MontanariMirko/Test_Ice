/***************************************************************************
    begin                : Sep 21 2013
    copyright            : (C) 2013 Mirko Montanari
    email                : 57454@studenti.unimore.it
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software for non commercial purpose              *
 *   and for public research institutes; you can redistribute it and/or    *
 *   modify it under the terms of the GNU General Public License.          *
 *   For commercial purpose see appropriate license terms                  *
 *                                                                         *
 ***************************************************************************/

// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.0
//
// <auto-generated>
//
// Generated from file `MapStringSeq.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//


// Freeze types in this file:
// name="MapStringSeq", key="int", value="Demo::StringSeq"

#include <Ice/BasicStream.h>
#include <IceUtil/StringUtil.h>
#include "MapStringSeq.h"

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 0
#       error Ice patch level mismatch!
#   endif
#endif

void
MapStringSeqKeyCodec::write(::Ice::Int v, Freeze::Key& bytes, const ::Ice::CommunicatorPtr& communicator, const Ice::EncodingVersion& encoding)
{
    IceInternal::InstancePtr instance = IceInternal::getInstance(communicator);
    IceInternal::BasicStream stream(instance.get(), encoding, true);
    stream.write(v);
    ::std::vector<Ice::Byte>(stream.b.begin(), stream.b.end()).swap(bytes);
}

void
MapStringSeqKeyCodec::read(::Ice::Int& v, const Freeze::Key& bytes, const ::Ice::CommunicatorPtr& communicator, const Ice::EncodingVersion& encoding)
{
    IceInternal::InstancePtr instance = IceInternal::getInstance(communicator);
    IceInternal::BasicStream stream(instance.get(), encoding, &bytes[0], &bytes[0] + bytes.size());
    stream.read(v);
}

namespace
{
    const ::std::string __MapStringSeqKeyCodec_typeId = "int";
}

const ::std::string&
MapStringSeqKeyCodec::typeId()
{
    return __MapStringSeqKeyCodec_typeId;
}

void
MapStringSeqValueCodec::write(const ::Demo::StringSeq& v, Freeze::Value& bytes, const ::Ice::CommunicatorPtr& communicator, const Ice::EncodingVersion& encoding)
{
    IceInternal::InstancePtr instance = IceInternal::getInstance(communicator);
    IceInternal::BasicStream stream(instance.get(), encoding, true);
    stream.startWriteEncaps();
    stream.write(v);
    stream.endWriteEncaps();
    ::std::vector<Ice::Byte>(stream.b.begin(), stream.b.end()).swap(bytes);
}

void
MapStringSeqValueCodec::read(::Demo::StringSeq& v, const Freeze::Value& bytes, const ::Ice::CommunicatorPtr& communicator, const Ice::EncodingVersion& encoding)
{
    IceInternal::InstancePtr instance = IceInternal::getInstance(communicator);
    IceInternal::BasicStream stream(instance.get(), encoding, &bytes[0], &bytes[0] + bytes.size());
    stream.startReadEncaps();
    stream.read(v);
    stream.endReadEncaps();
}

namespace
{
    const ::std::string __MapStringSeqValueCodec_typeId = "::Demo::StringSeq";
}

const ::std::string&
MapStringSeqValueCodec::typeId()
{
    return __MapStringSeqValueCodec_typeId;
}
