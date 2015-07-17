/* Generated by RuntimeBrowser.
 */

@protocol TSPObjectContextDelegate <TSPSupportDirectoryDelegate>

@optional

- (void)addPersistenceWarnings:(NSSet *)arg1;
- (NSDictionary *)additionalDocumentPropertiesForWrite;
- (BOOL)areExternalReferencesToDataAllowedAtURL:(NSURL *)arg1;
- (BOOL)areNewExternalReferencesToDataAllowed;
- (NSUUID *)baseUUIDForObjectUUID;
- (void)context:(TSPObjectContext *)arg1 didDownloadDocumentResources:(NSArray *)arg2 failedOrCancelledDocumentResources:(NSArray *)arg3 error:(NSError *)arg4;
- (void)context:(TSPObjectContext *)arg1 didDownloadRemoteData:(TSPData *)arg2 error:(NSError *)arg3;
- (void)didLoadDocumentWrittenByPreviousVersion;
- (NSString *)documentPasswordHintForWrite;
- (<NSFilePresenter> *)filePresenter;
- (void)gilligan_data:(TSPData *)arg1 didMoveFromPackageIdentifier:(unsigned char)arg2 packageLocator:(NSString *)arg3 toPackageIdentifier:(unsigned char)arg4 packageLocator:(NSString *)arg5;
- (BOOL)gilligan_isRemoteData:(TSPData *)arg1;
- (BOOL)ignoreDocumentSupport;
- (BOOL)isDocumentSupportTemporary;
- (BOOL)isInCollaborationMode;
- (BOOL)isInReadOnlyMode;
- (void)makeDocumentReadOnly;
- (NSDictionary *)packageDataForWrite;
- (NSSet *)persistenceWarningsForData:(TSPData *)arg1 flags:(unsigned int)arg2;
- (void)presentPersistenceError:(NSError *)arg1;
- (BOOL)preserveDocumentRevisionIdentifierForSaveURL:(NSURL *)arg1;
- (void)resumeAutosave;
- (BOOL)retrievePassphraseWithConsumer:(id <TSPPassphraseConsumer>)arg1;
- (void)suspendAutosave;

@end