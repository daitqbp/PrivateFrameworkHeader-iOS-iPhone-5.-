/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface AuthScheme : NSObject  {
}

+ (id)knownSchemes;
+ (id)authSchemesForAccount:(id)arg1 connection:(id)arg2;
+ (void)registerSchemeClass:(Class)arg1;
+ (id)schemeWithName:(id)arg1;
+ (void)initialize;

- (unsigned int)defaultPortForAccount:(id)arg1;
- (BOOL)hasEncryption;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (id)humanReadableName;
- (BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (Class)authenticatorClass;
- (BOOL)requiresPassword;
- (Class)connectionClassForAccountClass:(Class)arg1;
- (id)name;
- (unsigned int)retainCount;
- (id)retain;
- (oneway void)release;

@end