/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PUPhotosGridViewControllerSpec;

@interface PUZoomableGridViewControllerSpec : NSObject  {
    BOOL _canDisplayMultipleRightBarButtonItems;
    PUPhotosGridViewControllerSpec *_gridSpec;
    int _magnifiedImageFormat;
    float _magnifiedYOffset;
    int _fullMomentsLevelThumbnailFormat;
    int _fullMomentsSectionHeaderStyle;
    int _collectionsSectionHeaderStyle;
    int _yearsSectionHeaderStyle;
    struct CGSize { 
        float width; 
        float height; 
    } _magnifiedImageSize;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _magnifiedDragEdgeInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _fullMomentsLevelSectionHeaderContentInset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _fullMomentsLevelSectionHeaderHighlightInset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _collectionsLevelSectionHeaderContentInset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _collectionsLevelSectionHeaderHighlightInset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _yearsLevelSectionHeaderContentInset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _yearsLevelSectionHeaderHighlightInset;
}

@property(retain) PUPhotosGridViewControllerSpec * gridSpec;
@property(readonly) BOOL canDisplayMultipleRightBarButtonItems;
@property(readonly) int magnifiedImageFormat;
@property(readonly) struct CGSize { float x1; float x2; } magnifiedImageSize;
@property float magnifiedYOffset;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } magnifiedDragEdgeInsets;
@property(readonly) int fullMomentsLevelThumbnailFormat;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } fullMomentsLevelSectionHeaderContentInset;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } fullMomentsLevelSectionHeaderHighlightInset;
@property(readonly) int fullMomentsSectionHeaderStyle;
@property(readonly) unsigned int fullMomentsSectionHeaderBackgroundStyle;
@property(readonly) int collectionsLevelThumbnailFormat;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } collectionsLevelSectionHeaderContentInset;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } collectionsLevelSectionHeaderHighlightInset;
@property(readonly) int collectionsSectionHeaderStyle;
@property(readonly) unsigned int collectionsSectionHeaderBackgroundStyle;
@property(readonly) int yearsLevelThumbnailFormat;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } yearsLevelSectionHeaderContentInset;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } yearsLevelSectionHeaderHighlightInset;
@property(readonly) int yearsSectionHeaderStyle;
@property(readonly) unsigned int yearsSectionHeaderBackgroundStyle;


- (void)setMagnifiedYOffset:(float)arg1;
- (float)magnifiedYOffset;
- (int)magnifiedImageFormat;
- (BOOL)canDisplayMultipleRightBarButtonItems;
- (void)_setGridSpec:(id)arg1;
- (id)mapViewControllerSpec;
- (id)newGridSpec;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionsLevelSectionHeaderHighlightInset;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionsLevelSectionHeaderContentInset;
- (unsigned int)collectionsSectionHeaderBackgroundStyle;
- (int)collectionsSectionHeaderStyle;
- (void)configureCollectionsLevelGridLayout:(id)arg1 forWidth:(float)arg2;
- (int)collectionsLevelThumbnailFormat;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })yearsLevelSectionHeaderHighlightInset;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })yearsLevelSectionHeaderContentInset;
- (unsigned int)yearsSectionHeaderBackgroundStyle;
- (int)yearsSectionHeaderStyle;
- (void)configureYearsLevelGridLayout:(id)arg1 forWidth:(float)arg2;
- (int)yearsLevelThumbnailFormat;
- (int)fullMomentsLevelThumbnailFormat;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })fullMomentsLevelSectionHeaderHighlightInset;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })fullMomentsLevelSectionHeaderContentInset;
- (unsigned int)fullMomentsSectionHeaderBackgroundStyle;
- (int)fullMomentsSectionHeaderStyle;
- (void)configureFullMomentsLevelGridLayout:(id)arg1 forWidth:(float)arg2;
- (void)setMagnifiedDragEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })magnifiedDragEdgeInsets;
- (struct CGSize { float x1; float x2; })magnifiedImageSize;
- (id)gridSpec;
- (void).cxx_destruct;

@end