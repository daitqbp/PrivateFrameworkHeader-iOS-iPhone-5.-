/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString;

@interface IUSongCellConfiguration : IUSongCellConfigurationAbstract  {
    NSString *_title;
    NSString *_album;
    NSString *_artist;
    int _mediaType;
}

@property(retain) NSString * title;
@property(retain) NSString * album;
@property(retain) NSString * artist;
@property int mediaType;

+ (void)getRequiredStringProperties:(id)arg1 optionalStringProperties:(id)arg2 forDataSource:(id)arg3;
+ (float)rowHeightForGlobalContext:(id)arg1;

- (id)artist;
- (id)album;
- (id)title;
- (void)setTitle:(id)arg1;
- (int)mediaType;
- (void)setMediaType:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })downloadButtonFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })downloadProgressIndicatorFrame;
- (void)setArtist:(id)arg1;
- (void)setAlbum:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (void)reloadImages;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)fontForLabelAtIndex:(unsigned int)arg1;

@end
