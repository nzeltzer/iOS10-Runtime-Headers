/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalIDEditorNameAndPhotoCell : HKMedicalIDEditorMultilineStringCell {
    UIButton * _editPhotoButton;
    UIButton * _editPhotoLabelButton;
    UIView * _nameBottomSeparator;
}

@property (nonatomic, readonly) UIButton *editPhotoButton;
@property (nonatomic, readonly) UIButton *editPhotoLabelButton;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) UIImage *photo;

+ (bool)showsLabelAndValue;

- (void).cxx_destruct;
- (void)_adjustEditPhotoButtonFontSizeIfNecessary;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)editPhotoButton;
- (id)editPhotoLabelButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)name;
- (id)photo;
- (void)setName:(id)arg1;
- (void)setPhoto:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

@end
