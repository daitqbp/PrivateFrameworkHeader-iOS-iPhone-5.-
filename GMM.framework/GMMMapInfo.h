/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMMapPoint;

@interface GMMMapInfo : PBCodable  {
    GMMMapPoint *_center;
    int _latitudeSpan;
    int _longitudeSpan;
    BOOL _hasZoomLevel;
    int _zoomLevel;
}

@property(retain) GMMMapPoint * center;
@property int latitudeSpan;
@property int longitudeSpan;
@property BOOL hasZoomLevel;
@property int zoomLevel;


- (BOOL)readFrom:(id)arg1;
- (id)initWithGEOMapRegion:(id)arg1 withZoom:(int)arg2;
- (id)initWithSearchRequest:(id)arg1;
- (int)zoomLevel;
- (void)setHasZoomLevel:(BOOL)arg1;
- (BOOL)hasZoomLevel;
- (int)longitudeSpan;
- (int)latitudeSpan;
- (void)setLongitudeSpan:(int)arg1;
- (void)setLatitudeSpan:(int)arg1;
- (void)setZoomLevel:(int)arg1;
- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setCenter:(id)arg1;
- (id)center;
- (id)description;
- (void)dealloc;

@end
