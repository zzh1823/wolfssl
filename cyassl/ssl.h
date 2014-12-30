/* ssl.h
 *
 * Copyright (C) 2006-2014 wolfSSL Inc.
 *
 * This file is part of wolfSSL. (formerly known as CyaSSL)
 *
 * wolfSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * wolfSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * a with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */


/*  
 * ssl.h makes wolfssl backwards compatibile with cyassl
 */


#ifndef WOLFSSL_CYASSL_H_
#define WOLFSSL_CYASSL_H_
/*
 * Name change
 * include the new ssl.h
 */
#include <wolfssl/ssl.h>

#ifdef __cplusplus
    extern "C" {
#endif

#ifdef _WIN32
    /* wincrypt.h clashes */
    #undef X509_NAME
#endif

#define CYASSL          WOLFSSL
#define CYASSL_CTX      WOLFSSL_CTX
#define CYASSL_METHOD   WOLFSSL_METHOD
#define CYASSL_SESSION  WOLFSSL_SESSION



#define CYASSL_X509       WOLFSSL_X509
#define CYASSL_X509_NAME  WOLFSSL_X509_NAME
#define CYASSL_X509_CHAIN WOLFSSL_X509_CHAIN

/* redeclare guard */
#define CYASSL_TYPES_DEFINED WOLFSSL_TYPES_DEFINED

/* cyassl/ssl.h (structs) */
#define CYASSL_RSA                WOLFSSL_RSA
#define CYASSL_DSA                WOLFSSL_DSA
#define CYASSL_BIO                WOLFSSL_BIO
#define CYASSL_CIPHER             WOLFSSL_CIPHER
#define CYASSL_MD4_CTX            WOLFSSL_MD4_CTX
#define CYASSL_EVP_PKEY           WOLFSSL_EVP_PKEY
#define CYASSL_X509_CRL           WOLFSSL_X509_CRL
#define CYASSL_ASN1_TIME          WOLFSSL_ASN1_TIME
#define CYASSL_BIO_METHOD         WOLFSSL_BIO_METHOD
#define CYASSL_X509_STORE         WOLFSSL_X509_STORE
#define CYASSL_X509_OBJECT        WOLFSSL_X509_OBJECT
#define CYASSL_X509_LOOKUP        WOLFSSL_X509_LOOKUP
#define CYASSL_ASN1_OBJECT        WOLFSSL_ASN1_OBJECT
#define CYASSL_ASN1_STRING        WOLFSSL_ASN1_STRING
#define CYASSL_COMP_METHOD        WOLFSSL_COMP_METHOD
#define CYASSL_ASN1_INTEGER       WOLFSSL_ASN1_INTEGER
#define CYASSL_X509_REVOKED       WOLFSSL_X509_REVOKED
#define CYASSL_dynlock_value      WOLFSSL_dynlock_value
#define CYASSL_X509_EXTENSION     WOLFSSL_X509_EXTENSION
#define CYASSL_X509_STORE_CTX     WOLFSSL_X509_STORE_CTX
#define CYASSL_X509_LOOKUP_METHOD WOLFSSL_X509_LOOKUP_METHOD

/* cyassl/test.h */
#ifdef CyaSSL_TEST_H
	#define CYASSL_THREAD WOLFSSL_THREAD
#endif

/* src/ssl.c */
#define CYASSL_CRL                       WOLFSSL_CRL
#define CYASSL_SSLV3                     WOLFSSL_SSLV3
#define CYASSL_TLSV1                     WOLFSSL_TLSV1
#define CYASSL_TLSV1_1                   WOLFSSL_TLSV1_1
#define CYASSL_TLSV1_2                   WOLFSSL_TLSV1_2
#define CYASSL_USER_CA                   WOLFSSL_USER_CA
#define CYASSL_CLIENT_END                WOLFSSL_CLIENT_END
#define CYASSL_CERT_MANAGER              WOLFSSL_CERT_MANAGER
#define MAX_CYASSL_FILE_SIZE             MAX_WOLFSSL_FILE_SIZE

#define CyaSSL_get_cipher                wolfSSL_get_cipher
#define CyaSSL_get_ciphers               wolfSSL_get_ciphers
#define CyaSSL_KeyPemToDer               wolfSSL_KeyPemToDer
#define CyaSSL_get_version               wolfSSL_get_version
#define CyaSSL_SetServerID               wolfSSL_SetServerID
#define CyaSSL_SetCertCbCtx              wolfSSL_SetCertCbCtx
#define CyaSSL_CertPemToDer              wolfSSL_CertPemToDer
#define CyaSSL_get_shutdown              wolfSSL_get_shutdown
#define CyaSSL_SetMinVersion             wolfSSL_SetMinVersion
#define CyaSSL_CTX_UnloadCAs             wolfSSL_CTX_UnloadCAs
#define CyaSSL_session_reused            wolfSSL_session_reused
#define CyaSSL_UnloadCertsKeys           wolfSSL_UnloadCertsKeys
#define CyaSSL_CIPHER_get_name           wolfSSL_CIPHER_get_name
#define CyaSSL_is_init_finished          wolfSSL_is_init_finished
#define CyaSSL_get_alert_history         wolfSSL_get_alert_history
#define CyaSSL_get_current_cipher        wolfSSL_get_current_cipher
#define CyaSSL_CertManagerUnloadCAs      wolfSSL_CertManagerUnloadCAs
#define CyaSSL_CertManagerEnableOCSP     wolfSSL_CertManagerEnableOCSP
#define CyaSSL_CTX_check_private_key     wolfSSL_CTX_check_private_key
#define CyaSSL_CertManagerDisableOCSP    wolfSSL_CertManagerDisableOCSP
#define CyaSSL_get_current_cipher_suite  wolfSSL_get_current_cipher_suite
#define CyaSSL_CTX_load_verify_locations wolfSSL_CTX_load_verify_locations
#define CyaSSL_CTX_set_default_passwd_cb wolfSSL_CTX_set_default_passwd_cb

#define CyaSSL_use_old_poly        wolfSSL_use_old_poly

/* io.c */
#define CYASSL_CBIO_ERR_ISR        WOLFSSL_CBIO_ERR_ISR
#define CYASSL_CBIO_ERR_TIMEOUT    WOLFSSL_CBIO_ERR_TIMEOUT
#define CYASSL_CBIO_ERR_GENERAL    WOLFSSL_CBIO_ERR_GENERAL
#define CYASSL_CBIO_ERR_CONN_RST   WOLFSSL_CBIO_ERR_CONN_RST
#define CYASSL_CBIO_ERR_WANT_READ  WOLFSSL_CBIO_ERR_WANT_READ
#define CYASSL_CBIO_ERR_WANT_WRITE WOLFSSL_CBIO_ERR_WANT_WRITE
#define CYASSL_CBIO_ERR_CONN_CLOSE WOLFSSL_CBIO_ERR_CONN_CLOSE

#define CyaSSL_GetIOReadCtx        wolfSSL_GetIOReadCtx
#define CyaSSL_GetIOWriteCtx       wolfSSL_GetIOWriteCtx

/* src/tls.c */
#define CYASSL_SERVER_END          WOLFSSL_SERVER_END
#define CYASSL_TLS_HMAC_INNER_SZ   WOLFSSL_TLS_HMAC_INNER_SZ

#define CyaSSL_DeriveTlsKeys       wolfSSL_DeriveTlsKeys
#define CyaSSL_make_eap_keys       wolfSSL_make_eap_keys
#define CyaSSL_MakeTlsMasterSecret wolfSSL_MakeTlsMasterSecret


/* src/internal.c */
#define CYASSL_CHAIN_CA                WOLFSSL_CHAIN_CA
#define CYASSL_ALERT_HISTORY           WOLFSSL_ALERT_HISTORY
#define CYASSL_SESSION_TIMEOUT         WOLFSSL_SESSION_TIMEOUT
#define CYASSL_CBIO_ERR_CONN_RST       WOLFSSL_CBIO_ERR_CONN_RST

#define cyassl_rc4                     wolfssl_rc4
#define cyassl_aes                     wolfssl_aes
#define cyassl_chacha                  wolfssl_chacha
#define CyaSSL_ERR_reason_error_string wolfSSL_ERR_reason_error_string

//#define wolfcrypt_test                 ctaocrypt_test

/* src/eys.c */
#define cyassl_triple_des wolfssl_triple_des

/* Initialization and Shutdown */
#define CyaSSL_Init         wolfSSL_Init
#define CyaSSL_library_init wolfSSL_library_init
#define CyaSSL_Cleanup      wolfSSL_Cleanup
#define CyaSSL_shutdown     wolfSSL_shutdown

/* Certs and keys */
#define CyaSSL_SetTmpDH                     wolfSSL_SetTmpDH
#define CyaSSL_KeepArrays                   wolfSSL_KeepArrays
#define CyaSSL_FreeArrays                   wolfSSL_FreeArrays

#define CyaSSL_use_PrivateKey_buffer        wolfSSL_use_PrivateKey_buffer
#define CyaSSL_use_certificate_buffer       wolfSSL_use_certificate_buffer
#define CyaSSL_CTX_load_verify_buffer       wolfSSL_CTX_load_verify_buffer
#define CyaSSL_CTX_use_PrivateKey_file      wolfSSL_CTX_use_PrivateKey_file
#define CyaSSL_CTX_use_certificate_file     wolfSSL_CTX_use_certificate_file
#define CyaSSL_CTX_use_PrivateKey_buffer    wolfSSL_CTX_use_PrivateKey_buffer
#define CyaSSL_CTX_use_PrivateKey_buffer    wolfSSL_CTX_use_PrivateKey_buffer
#define CyaSSL_CTX_use_certificate_buffer   wolfSSL_CTX_use_certificate_buffer
#define CyaSSL_CTX_use_NTRUPrivateKey_file  wolfSSL_CTX_use_NTRUPrivateKey_file
#define CyaSSL_use_certificate_chain_buffer wolfSSL_use_certificate_chain_buffer
#define CyaSSL_CTX_der_load_verify_locations    \
    	                                wolfSSL_CTX_der_load_verify_locations
#define CyaSSL_CTX_use_certificate_chain_file   \
    	                                wolfSSL_CTX_use_certificate_chain_file
#define CyaSSL_CTX_use_certificate_chain_buffer \
    	                                wolfSSL_CTX_use_certificate_chain_buffer

/* Context and Session Setup*/
#define CyaSSL_new                        wolfSSL_new
#define CyaSSL_free                       wolfSSL_free
#define CyaSSL_set_fd                     wolfSSL_set_fd
#define CyaSSL_CTX_new                    wolfSSL_CTX_new
#define CyaSSL_CTX_free                   wolfSSL_CTX_free
#define CyaSSL_SetVersion                 wolfSSL_SetVersion
#define CyaSSL_set_verify                 wolfSSL_set_verify
#define CyaSSL_set_session                wolfSSL_set_session
#define CyaSSL_set_timeout                wolfSSL_set_timeout
#define CyaSSL_CTX_set_verify             wolfSSL_CTX_set_verify
#define CyaSSL_CTX_set_timeout            wolfSSL_CTX_set_timeout
#define CyaSSL_set_cipher_list            wolfSSL_set_cipher_list
#define CyaSSL_set_compression            wolfSSL_set_compression
#define CyaTLSv1_client_method            wolfTLSv1_client_method
#define CyaTLSv1_server_method            wolfTLSv1_server_method
#define CyaSSLv3_client_method            wolfSSLv3_client_method
#define CyaSSLv3_server_method            wolfSSLv3_server_method
#define CyaSSLv23_client_method           wolfSSLv23_client_method
#define CyaSSLv23_server_method           wolfSSLv23_server_method
#define CyaDTLSv1_client_method           wolfDTLSv1_client_method
#define CyaDTLSv1_server_method           wolfDTLSv1_server_method
#define CyaSSL_check_domain_name          wolfSSL_check_domain_name
#define CyaTLSv1_1_client_method          wolfTLSv1_1_client_method
#define CyaTLSv1_1_server_method          wolfTLSv1_1_server_method
#define CyaTLSv1_2_client_method          wolfTLSv1_2_client_method
#define CyaTLSv1_2_server_method          wolfTLSv1_2_server_method
#define CyaDTLSv1_2_client_method         wolfDTLSv1_2_client_method
#define CyaDTLSv1_2_server_method         wolfDTLSv1_2_server_method
#define CyaSSL_set_group_messages         wolfSSL_set_group_messages
#define CyaSSL_set_using_nonblock         wolfSSL_set_using_nonblock
#define CyaSSL_CTX_set_cipher_list        wolfSSL_CTX_set_cipher_list
#define CyaSSL_CTX_set_group_messages     wolfSSL_CTX_set_group_messages
#define CyaSSL_CTX_set_session_cache_mode wolfSSL_CTX_set_session_cache_mode

/* Callbacks */
#define CyaSSL_accept_ex              wolfSSL_accept_ex
#define CyaSSL_SetIORecv              wolfSSL_SetIORecv
#define CyaSSL_SetIOSend              wolfSSL_SetIOSend
#define CyaSSL_connect_ex             wolfSSL_connect_ex
#define CyaSSL_CTX_SetCACb            wolfSSL_CTX_SetCACb
#define CyaSSL_SetIOReadCtx           wolfSSL_SetIOReadCtx
#define CyaSSL_SetRsaEncCtx           wolfSSL_SetRsaEncCtx
#define CyaSSL_GetRsaEncCtx           wolfSSL_GetRsaEncCtx
#define CyaSSL_SetRsaDecCtx           wolfSSL_SetRsaDecCtx
#define CyaSSL_GetRsaDecCtx           wolfSSL_GetRsaDecCtx
#define CyaSSL_SetLoggingCb           wolfSSL_SetLoggingCb
#define CyaSSL_SetEccSignCtx          wolfSSL_SetEccSignCtx
#define CyaSSL_GetEccSignCtx          wolfSSL_GetEccSignCtx
#define CyaSSL_SetRsaSignCtx          wolfSSL_SetRsaSignCtx
#define CyaSSL_GetRsaSignCtx          wolfSSL_GetRsaSignCtx
#define CyaSSL_SetIOWriteCtx          wolfSSL_SetIOWriteCtx
#define CyaSSL_SetIOReadFlags         wolfSSL_SetIOReadFlags
#define CyaSSL_SetEccVerifyCtx        wolfSSL_SetEccVerifyCtx
#define CyaSSL_GetEccVerifyCtx        wolfSSL_GetEccVerifyCtx
#define CyaSSL_SetRsaVerifyCtx        wolfSSL_SetRsaVerifyCtx
#define CyaSSL_GetRsaVerifyCtx        wolfSSL_GetRsaVerifyCtx
#define CyaSSL_CTX_SetRsaEncCb        wolfSSL_CTX_SetRsaEncCb
#define CyaSSL_CTX_SetRsaDecCb        wolfSSL_CTX_SetRsaDecCb
#define CyaSSL_SetIOWriteFlags        wolfSSL_SetIOWriteFlags
#define CyaSSL_SetTlsHmacInner        wolfSSL_SetTlsHmacInner
#define CyaSSL_SetMacEncryptCtx       wolfSSL_SetMacEncryptCtx
#define CyaSSL_GetMacEncryptCtx       wolfSSL_GetMacEncryptCtx
#define CyaSSL_CTX_SetEccSignCb       wolfSSL_CTX_SetEccSignCb
#define CyaSSL_CTX_SetRsaSignCb       wolfSSL_CTX_SetRsaSignCb
#define CyaSSL_CTX_SetEccVerifyCb     wolfSSL_CTX_SetEccVerifyCb
#define CyaSSL_CTX_SetRsaVerifyCb     wolfSSL_CTX_SetRsaVerifyCb
#define CyaSSL_CTX_SetMacEncryptCb    wolfSSL_CTX_SetMacEncryptCb
#define CyaSSL_SetDecryptVerifyCtx    wolfSSL_SetDecryptVerifyCtx
#define CyaSSL_GetDecryptVerifyCtx    wolfSSL_GetDecryptVerifyCtx
#define CyaSSL_CTX_SetDecryptVerifyCb wolfSSL_CTX_SetDecryptVerifyCb

/* Error Handling and Debugging*/
#define CyaSSL_get_error           wolfSSL_get_error
#define CyaSSL_want_read           wolfSSL_want_read
#define CyaSSL_want_write          wolfSSL_want_write
#define CyaSSL_Debugging_ON        wolfSSL_Debugging_ON
#define CyaSSL_Debugging_OFF       wolfSSL_Debugging_OFF
#define CyaSSL_ERR_error_string    wolfSSL_ERR_error_string
#define CyaSSL_load_error_strings  wolfSSL_load_error_strings
#define CyaSSL_ERR_error_string_n  wolfSSL_ERR_error_string_n
#define CyaSSL_ERR_print_errors_fp wolfSSL_ERR_print_errors_fp

/* OCSP and CRL */
#define CyaSSL_CTX_OCSP_set_options wolfSSL_CTX_OCSP_set_options
#define CyaSSL_CTX_OCSP_set_override_url wolfSSL_CTX_OCSP_set_override_url

/* Informational */
#define CyaSSL_GetSide            wolfSSL_GetSide
#define CyaSSL_IsTLSv1_1          wolfSSL_IsTLSv1_1
#define CyaSSL_GetKeySize         wolfSSL_GetKeySize
#define CyaSSL_GetHmacSize        wolfSSL_GetHmacSize
#define CyaSSL_GetHmacType        wolfSSL_GetHmacType
#define CyaSSL_GetMacSecret       wolfSSL_GetMacSecret
#define CyaSSL_GetObjectSize      wolfSSL_GetObjectSize
#define CyaSSL_GetBulkCipher      wolfSSL_GetBulkCipher
#define CyaSSL_GetCipherType      wolfSSL_GetCipherType
#define CyaSSL_GetAeadMacSize     wolfSSL_GetAeadMacSize
#define CyaSSL_GetClientWriteIV   wolfSSL_GetClientWriteIV
#define CyaSSL_GetServerWriteIV   wolfSSL_GetServerWriteIV
#define CyaSSL_GetClientWriteKey  wolfSSL_GetClientWriteKey
#define CyaSSL_GetServerWriteKey  wolfSSL_GetServerWriteKey
#define CyaSSL_GetCipherBlockSize wolfSSL_GetCipherBlockSize

/* Connection, Session, and I/O */
#define CyaSSL_peek               wolfSSL_peek
#define CyaSSL_read               wolfSSL_read
#define CyaSSL_recv               wolfSSL_recv
#define CyaSSL_send               wolfSSL_send
#define CyaSSL_write              wolfSSL_write
#define CyaSSL_writev             wolfSSL_writev
#define CyaSSL_accept             wolfSSL_accept
#define CyaSSL_get_fd             wolfSSL_get_fd
#define CyaSSL_connect            wolfSSL_connect
#define CyaSSL_pending            wolfSSL_pending
#define CyaSSL_negotiate          wolfSSL_negotiate
#define CyaSSL_get_session        wolfSSL_get_session
#define CyaSSL_connect_cert       wolfSSL_connect_cert
#define CyaSSL_flush_sessions     wolfSSL_flush_sessions
#define CyaSSL_get_using_nonblock wolfSSL_get_using_nonblock

/* DTLS Specific */
#define CyaSSL_dtls                     wolfSSL_dtls
#define CyaSSL_dtls_set_peer            wolfSSL_dtls_set_peer
#define CyaSSL_dtls_get_peer            wolfSSL_dtls_get_peer
#define CyaSSL_dtls_got_timeout         wolfSSL_dtls_got_timeout
#define CyaSSL_dtls_get_current_timeout wolfSSL_dtls_get_current_timeout

/* Certificate Manager */
#define CyaSSL_CertManagerNew          wolfSSL_CertManagerNew
#define CyaSSL_CertManagerFree         wolfSSL_CertManagerFree
#define CyaSSL_CertManagerLoadCA       wolfSSL_CertManagerLoadCA
#define CyaSSL_CertManagerVerify       wolfSSL_CertManagerVerify
#define CyaSSL_CertManagerEnableCRL    wolfSSL_CertManagerEnableCRL
#define CyaSSL_CertManagerDisableCRL   wolfSSL_CertManagerDisableCRL
#define CyaSSL_CertManagerVerifyBuffer wolfSSL_CertManagerVerifyBuffer

/* OpenSSL Compatibility Layer */
#define CyaSSL_PemCertToDer               wolfSSL_PemCertToDer
#define CyaSSL_get_sessionID              wolfSSL_get_sessionID
#define CyaSSL_get_peer_count             wolfSSL_get_peer_count
#define CyaSSL_get_chain_cert             wolfSSL_get_chain_cert
#define CyaSSL_get_peer_chain             wolfSSL_get_peer_chain
#define CyaSSL_get_peer_length            wolfSSL_get_peer_length
#define CyaSSL_get_chain_cert_pem         wolfSSL_get_chain_cert_pem
#define CyaSSL_use_PrivateKey_file        wolfSSL_use_PrivateKey_file
#define CyaSSL_use_certificate_file       wolfSSL_use_certificate_file
#define CyaSSL_use_RSAPrivateKey_file     wolfSSL_use_RSAPrivateKey_file
#define CyaSSL_X509_get_serial_number     wolfSSL_X509_get_serial_number
#define CyaSSL_CTX_use_RSAPrivateKey_file wolfSSL_CTX_use_RSAPrivateKey_file
#define CyaSSL_use_certificate_chain_file wolfSSL_use_certificate_chain_file


/* TLS Extensions */
#define CyaSSL_UseSNI                wolfSSL_UseSNI
#define CyaSSL_CTX_UseSNI            wolfSSL_CTX_UseSNI
#define CyaSSL_SNI_SetOptions        wolfSSL_SNI_SetOptions
#define CyaSSL_SNI_GetRequest        wolfSSL_SNI_GetRequest
#define CyaSSL_UseMaxFragment        wolfSSL_UseMaxFragment
#define CyaSSL_UseTruncatedHMAC      wolfSSL_UseTruncatedHMAC
#define CyaSSL_UseSupportedCurve     wolfSSL_UseSupportedCurve
#define CyaSSL_SNI_GetFromBuffer     wolfSSL_SNI_GetFromBuffer
#define CyaSSL_CTX_SNI_SetOptions    wolfSSL_CTX_SNI_SetOptions
#define CyaSSL_CTX_UseMaxFragment    wolfSSL_CTX_UseMaxFragment
#define CyaSSL_CTX_UseTruncatedHMAC  wolfSSL_CTX_UseTruncatedHMAC
#define CyaSSL_CTX_UseSupportedCurve wolfSSL_CTX_UseSupportedCurve

/* End wolfssl -> cyassl -> openssl compatibility */

/* JRB macro redefinitions and api calls for cryptography for reverse compat. */

/* new fips header files since old ones could not be changed for compatibility*/
#ifndef NO_AES
    #include <wolfssl/wolfcrypt/aes.h>
#endif




#ifdef WOLFSSL_SMALL_STACK
    #define CYASSL_SMALL_STACK
#endif

#if !defined(CYASSL_MAX_ERROR_SZ) && !defined(HAVE_FIPS)
    #define CYASSL_MAX_ERROR_SZ WOLFSSL_MAX_ERROR_SZ
#endif
/* wrapper around macros until they are changed in cyassl code  
 * needs investigation in regards to macros in fips */
#define NO_WOLFSSL_ALLOC_ALIGN NO_CYASSL_ALLOC_ALIGN /* @TODO*/

/* for pwdbased reverse compatibility */
#ifndef NO_PWDBASED
    #define PBKDF1 wc_PBKDF1
    #define PBKDF2 wc_PBKDF2
    #define PKCS12_PBKDF wc_PKCS12_PBKDF
#endif


/* examples/client/client.h */
#define CYASSL_THREAD WOLFSSL_THREAD

/* examples/client/client.c */
#define LIBCYASSL_VERSION_STRING LIBWOLFSSL_VERSION_STRING


#ifdef __cplusplus
    } /* extern "C" */
#endif


#endif /* CyaSSL_openssl_h__ */
