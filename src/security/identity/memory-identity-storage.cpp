/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil -*- */
/**
 * Copyright (C) 2013 Regents of the University of California.
 * @author: Jeff Thompson <jefft0@remap.ucla.edu>
 * See COPYING for copyright and distribution information.
 */

#if 1
#include <stdexcept>
#endif
#include <algorithm>
#include <ndn-cpp/security/security-exception.hpp>
#include <ndn-cpp/security/identity/memory-identity-storage.hpp>

using namespace std;
using namespace ndn::ptr_lib;

namespace ndn {

MemoryIdentityStorage::~MemoryIdentityStorage()
{
}

bool 
MemoryIdentityStorage::doesIdentityExist(const Name& identityName)
{
  string identityUri = identityName.toUri();
  return find(identityStore_.begin(), identityStore_.end(), identityUri) != identityStore_.end();
}

void
MemoryIdentityStorage::addIdentity(const Name& identityName)
{
  string identityUri = identityName.toUri();
  if (find(identityStore_.begin(), identityStore_.end(), identityUri) != identityStore_.end())
    throw SecurityException("Identity already exists: " + identityUri);
  
  identityStore_.push_back(identityUri);
}

bool 
MemoryIdentityStorage::revokeIdentity()
{
#if 1
  throw runtime_error("MemoryIdentityStorage::revokeIdentity not implemented");
#endif
}

bool 
MemoryIdentityStorage::doesKeyExist(const Name& keyName)
{
#if 1
  throw runtime_error("MemoryIdentityStorage::doesKeyExist not implemented");
#endif
}

void 
MemoryIdentityStorage::addKey(const Name& keyName, KeyType keyType, const Blob& publicKeyDer)
{
#if 1
  throw runtime_error("MemoryIdentityStorage::addKey not implemented");
#endif
}

Blob
MemoryIdentityStorage::getKey(const Name& keyName)
{
#if 1
  throw runtime_error("MemoryIdentityStorage::getKey not implemented");
#endif
}

void 
MemoryIdentityStorage::activateKey(const Name& keyName)
{
#if 1
  throw runtime_error("MemoryIdentityStorage::activateKey not implemented");
#endif
}

void 
MemoryIdentityStorage::deactivateKey(const Name& keyName)
{
#if 1
  throw runtime_error("MemoryIdentityStorage::deactivateKey not implemented");
#endif
}

bool
MemoryIdentityStorage::doesCertificateExist(const Name& certificateName)
{
#if 1
  throw runtime_error("MemoryIdentityStorage::doesCertificateExist not implemented");
#endif
}

void 
MemoryIdentityStorage::addCertificate(const IdentityCertificate& certificate)
{
#if 1
  throw runtime_error("MemoryIdentityStorage::addCertificate not implemented");
#endif
}

ptr_lib::shared_ptr<Data> 
MemoryIdentityStorage::getCertificate(const Name &certificateName, bool allowAny)
{
#if 1
  throw runtime_error("MemoryIdentityStorage::getCertificate not implemented");
#endif
}

Name 
MemoryIdentityStorage::getDefaultIdentity()
{
  return Name(defaultIdentity_);
}

Name 
MemoryIdentityStorage::getDefaultKeyNameForIdentity(const Name& identityName)
{
#if 1
  throw runtime_error("MemoryIdentityStorage::getDefaultKeyNameForIdentity not implemented");
#endif
}

Name 
MemoryIdentityStorage::getDefaultCertificateNameForKey(const Name& keyName)
{
#if 1
  throw runtime_error("MemoryIdentityStorage::getDefaultCertificateNameForKey not implemented");
#endif
}

void 
MemoryIdentityStorage::setDefaultIdentity(const Name& identityName)
{
  string identityUri = identityName.toUri();
  if (find(identityStore_.begin(), identityStore_.end(), identityUri) != identityStore_.end())
    defaultIdentity_ = identityUri;
  else
    // The identity doesn't exist, so clear the default.
    defaultIdentity_.clear();
}

void 
MemoryIdentityStorage::setDefaultKeyNameForIdentity(const Name& keyName, const Name& identityNameCheck)
{
#if 1
  throw runtime_error("MemoryIdentityStorage::setDefaultKeyNameForIdentity not implemented");
#endif
}

void 
MemoryIdentityStorage::setDefaultCertificateNameForKey(const Name& keyName, const Name& certificateName)  
{
#if 1
  throw runtime_error("MemoryIdentityStorage::setDefaultCertificateNameForKey not implemented");
#endif
}

}