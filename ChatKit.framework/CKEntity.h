/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKService, NSString, UIImage;

@interface CKEntity : NSObject  {
    int _addressBookUID;
    int _identifier;
    int _propertyType;
    BOOL _foundABNameForSender;
    BOOL _senderIsVoicemail;
    void *_abRecord;
    unsigned int _addressHash;
    CKService *_service;
    id _contactImageThumbnail;
}

@property(readonly) NSString * name;
@property(readonly) NSString * rawAddress;
@property(readonly) struct __CFPhoneNumber { }* phoneNumberRef;
@property(readonly) NSString * normalizedRawAddress;
@property(readonly) unsigned int addressHash;
@property(readonly) BOOL hasContactImage;
@property(retain,readonly) UIImage * contactImageThumbnail;
@property(readonly) unsigned int textTone;
@property(readonly) BOOL senderIsVoicemail;
@property(readonly) BOOL foundABNameForSender;
@property int propertyType;
@property(readonly) void* abRecord;
@property int identifier;
@property int addressBookUID;
@property(readonly) CKService * service;

+ (id)copyAllEntities;
+ (void)resetClassCache;
+ (id)contactImageThumbnailForMeCard;

- (int)propertyType;
- (int)identifier;
- (void)setIdentifier:(int)arg1;
- (id)name;
- (id)_initWithService:(id)arg1;
- (unsigned long)textTone;
- (void)setABRecord:(void*)arg1 withIdentifier:(int)arg2;
- (id)normalizedRawAddress;
- (BOOL)senderIsVoicemail;
- (BOOL)foundABNameForSender;
- (void)setPropertyType:(int)arg1;
- (int)addressBookUID;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (unsigned int)addressHash;
- (id)service;
- (id)contactImageThumbnail;
- (void*)abRecord;
- (BOOL)hasContactImage;
- (void)setAddressBookUID:(int)arg1;
- (id)rawAddress;
- (void)dealloc;
- (void)resetCaches;

@end
