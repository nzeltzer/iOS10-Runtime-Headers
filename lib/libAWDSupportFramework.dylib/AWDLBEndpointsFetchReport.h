/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLBEndpointsFetchReport : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    int _connectionCellularFallbackCount;
    int _endpointsFetchTaskBadReplyCount;
    int _endpointsFetchTaskCount;
    int _endpointsFetchTaskFailureCount;
    int _endpointsFetchTaskSuccessCount;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionCellularFallbackCount : 1; 
        unsigned int endpointsFetchTaskBadReplyCount : 1; 
        unsigned int endpointsFetchTaskCount : 1; 
        unsigned int endpointsFetchTaskFailureCount : 1; 
        unsigned int endpointsFetchTaskSuccessCount : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasEndpointsFetchTaskCount;
@property int endpointsFetchTaskCount;
@property bool hasEndpointsFetchTaskSuccessCount;
@property int endpointsFetchTaskSuccessCount;
@property bool hasEndpointsFetchTaskFailureCount;
@property int endpointsFetchTaskFailureCount;
@property bool hasEndpointsFetchTaskBadReplyCount;
@property int endpointsFetchTaskBadReplyCount;
@property bool hasConnectionCellularFallbackCount;
@property int connectionCellularFallbackCount;


- (int)connectionCellularFallbackCount;
- (int)endpointsFetchTaskBadReplyCount;
- (int)endpointsFetchTaskFailureCount;
- (int)endpointsFetchTaskSuccessCount;
- (int)endpointsFetchTaskCount;
- (bool)hasConnectionCellularFallbackCount;
- (void)setHasConnectionCellularFallbackCount:(bool)arg1;
- (void)setConnectionCellularFallbackCount:(int)arg1;
- (bool)hasEndpointsFetchTaskBadReplyCount;
- (void)setHasEndpointsFetchTaskBadReplyCount:(bool)arg1;
- (void)setEndpointsFetchTaskBadReplyCount:(int)arg1;
- (bool)hasEndpointsFetchTaskFailureCount;
- (void)setHasEndpointsFetchTaskFailureCount:(bool)arg1;
- (void)setEndpointsFetchTaskFailureCount:(int)arg1;
- (bool)hasEndpointsFetchTaskSuccessCount;
- (void)setHasEndpointsFetchTaskSuccessCount:(bool)arg1;
- (void)setEndpointsFetchTaskSuccessCount:(int)arg1;
- (bool)hasEndpointsFetchTaskCount;
- (void)setHasEndpointsFetchTaskCount:(bool)arg1;
- (void)setEndpointsFetchTaskCount:(int)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end