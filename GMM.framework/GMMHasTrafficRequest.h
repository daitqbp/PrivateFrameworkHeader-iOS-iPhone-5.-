/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMMapPoint;

@interface GMMHasTrafficRequest : GMMOldRequest  {
    GMMMapPoint *_mapPoint;
}

@property(retain) GMMMapPoint * mapPoint;


- (Class)responseClass;
- (BOOL)readFrom:(id)arg1;
- (void)setMapPoint:(id)arg1;
- (id)mapPoint;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (void)dealloc;

@end
