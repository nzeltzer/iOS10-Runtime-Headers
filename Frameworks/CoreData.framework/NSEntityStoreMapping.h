/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityDescription, NSArray, NSString, NSDictionary;

@interface NSEntityStoreMapping : NSStoreMapping  {
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}


- (id)createTableStatement;
- (id)initWithEntity:(id)arg1;
- (id)foreignKeyConstraintDefinitions;
- (id)foreignKeyColumnDefinitions;
- (id)attributeColumnDefinitions;
- (id)primaryKeyColumnDefinitions;
- (unsigned int)subentityID;
- (id)subentityColumn;
- (BOOL)isSingleTableEntity;
- (id)primaryKeys;
- (id)propertyMappings;
- (void)setSubentityID:(unsigned int)arg1;
- (void)setSubentityColumn:(id)arg1;
- (void)setSingleTableEntity:(BOOL)arg1;
- (void)setPrimaryKeys:(id)arg1;
- (void)setPropertyMappings:(id)arg1;
- (void)setEntity:(id)arg1;
- (id)entity;
- (id)relationshipMappings;
- (id)attributeMappings;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;

@end