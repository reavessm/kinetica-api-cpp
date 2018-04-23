/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __GET_RECORDS_H__
#define __GET_RECORDS_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #getRecordsRaw(const GetRecordsRequest&) const}.
     * <p>
     * Retrieves records from a given table, optionally filtered by an
     * expression and/or sorted by a column. This operation can be performed on
     * tables, views, or on homogeneous collections (collections containing
     * tables of all the same type). Records can be returned encoded as binary,
     * json or geojson.
     * <p>
     * This operation supports paging through the data via the @a offset and @a
     * limit parameters. Note that when paging through a table, if the table
     * (or the underlying table in case of a view) is updated (records are
     * inserted, deleted or modified) the records retrieved may differ between
     * calls based on the updates applied.
     */
    struct GetRecordsRequest
    {

        /**
         * Constructs a GetRecordsRequest object with default parameter values.
         */
        GetRecordsRequest() :
            tableName(std::string()),
            offset(int64_t()),
            limit(int64_t()),
            encoding(std::string("binary")),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a GetRecordsRequest object with the specified parameters.
         * 
         * @param[in] tableName_  Name of the table from which the records will
         *                        be fetched. Must be a table, view or
         *                        homogeneous collection.
         * @param[in] offset_  A positive integer indicating the number of
         *                     initial results to skip (this can be useful for
         *                     paging through the results).  The minimum
         *                     allowed value is 0. The maximum allowed value is
         *                     MAX_INT.
         * @param[in] limit_  A positive integer indicating the maximum number
         *                    of results to be returned. Or END_OF_SET (-9999)
         *                    to indicate that the max number of results should
         *                    be returned.
         * @param[in] options_
         *                      <ul>
         *                              <li> gpudb::get_records_expression:
         *                      Optional filter expression to apply to the
         *                      table.
         *                              <li>
         *                      gpudb::get_records_fast_index_lookup: Indicates
         *                      if indexes should be used to perform the lookup
         *                      for a given expression if possible. Only
         *                      applicable if there is no sorting, the
         *                      expression contains only equivalence
         *                      comparisons based on existing tables indexes
         *                      and the range of requested values is from [0 to
         *                      END_OF_SET].
         *                      <ul>
         *                              <li> gpudb::get_records_true
         *                              <li> gpudb::get_records_false
         *                      </ul>
         *                      The default value is gpudb::get_records_true.
         *                              <li> gpudb::get_records_sort_by:
         *                      Optional column that the data should be sorted
         *                      by. Empty by default (i.e. no sorting is
         *                      applied).
         *                              <li> gpudb::get_records_sort_order:
         *                      String indicating how the returned values
         *                      should be sorted - ascending or descending. If
         *                      sort_order is provided, sort_by has to be
         *                      provided.
         *                      <ul>
         *                              <li> gpudb::get_records_ascending
         *                              <li> gpudb::get_records_descending
         *                      </ul>
         *                      The default value is
         *                      gpudb::get_records_ascending.
         *                      </ul>
         * 
         */
        GetRecordsRequest(const std::string& tableName_, const int64_t offset_, const int64_t limit_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            offset( offset_ ),
            limit( limit_ ),
            encoding( "binary" ),
            options( options_ )
        {
        }

        /**
         * Constructs a GetRecordsRequest object with the specified parameters.
         * 
         * @param[in] tableName_  Name of the table from which the records will
         *                        be fetched. Must be a table, view or
         *                        homogeneous collection.
         * @param[in] offset_  A positive integer indicating the number of
         *                     initial results to skip (this can be useful for
         *                     paging through the results).  The minimum
         *                     allowed value is 0. The maximum allowed value is
         *                     MAX_INT.
         * @param[in] limit_  A positive integer indicating the maximum number
         *                    of results to be returned. Or END_OF_SET (-9999)
         *                    to indicate that the max number of results should
         *                    be returned.
         * @param[in] encoding_  Specifies the encoding for returned records.
         *                       <ul>
         *                               <li> gpudb::get_records_binary
         *                               <li> gpudb::get_records_json
         *                               <li> gpudb::get_records_geojson
         *                       </ul>
         *                       The default value is
         *                       gpudb::get_records_binary.
         * @param[in] options_
         *                      <ul>
         *                              <li> gpudb::get_records_expression:
         *                      Optional filter expression to apply to the
         *                      table.
         *                              <li>
         *                      gpudb::get_records_fast_index_lookup: Indicates
         *                      if indexes should be used to perform the lookup
         *                      for a given expression if possible. Only
         *                      applicable if there is no sorting, the
         *                      expression contains only equivalence
         *                      comparisons based on existing tables indexes
         *                      and the range of requested values is from [0 to
         *                      END_OF_SET].
         *                      <ul>
         *                              <li> gpudb::get_records_true
         *                              <li> gpudb::get_records_false
         *                      </ul>
         *                      The default value is gpudb::get_records_true.
         *                              <li> gpudb::get_records_sort_by:
         *                      Optional column that the data should be sorted
         *                      by. Empty by default (i.e. no sorting is
         *                      applied).
         *                              <li> gpudb::get_records_sort_order:
         *                      String indicating how the returned values
         *                      should be sorted - ascending or descending. If
         *                      sort_order is provided, sort_by has to be
         *                      provided.
         *                      <ul>
         *                              <li> gpudb::get_records_ascending
         *                              <li> gpudb::get_records_descending
         *                      </ul>
         *                      The default value is
         *                      gpudb::get_records_ascending.
         *                      </ul>
         * 
         */
        GetRecordsRequest(const std::string& tableName_, const int64_t offset_, const int64_t limit_, const std::string& encoding_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            offset( offset_ ),
            limit( limit_ ),
            encoding( encoding_ ),
            options( options_ )
        {
        }

        std::string tableName;
        int64_t offset;
        int64_t limit;
        std::string encoding;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::GetRecordsRequest>
    {
        static void encode(Encoder& e, const gpudb::GetRecordsRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.offset);
            ::avro::encode(e, v.limit);
            ::avro::encode(e, v.encoding);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::GetRecordsRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.tableName);
                            break;

                        case 1:
                            ::avro::decode(d, v.offset);
                            break;

                        case 2:
                            ::avro::decode(d, v.limit);
                            break;

                        case 3:
                            ::avro::decode(d, v.encoding);
                            break;

                        case 4:
                            ::avro::decode(d, v.options);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.offset);
                ::avro::decode(d, v.limit);
                ::avro::decode(d, v.encoding);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #getRecordsRaw(const GetRecordsRequest&) const}.
     * <p>
     * Retrieves records from a given table, optionally filtered by an
     * expression and/or sorted by a column. This operation can be performed on
     * tables, views, or on homogeneous collections (collections containing
     * tables of all the same type). Records can be returned encoded as binary,
     * json or geojson.
     * <p>
     * This operation supports paging through the data via the @a offset and @a
     * limit parameters. Note that when paging through a table, if the table
     * (or the underlying table in case of a view) is updated (records are
     * inserted, deleted or modified) the records retrieved may differ between
     * calls based on the updates applied.
     */
    struct RawGetRecordsResponse
    {

        /**
         * Constructs a RawGetRecordsResponse object with default parameter
         * values.
         */
        RawGetRecordsResponse() :
            tableName(std::string()),
            typeName(std::string()),
            typeSchema(std::string()),
            recordsBinary(std::vector<std::vector<uint8_t> >()),
            recordsJson(std::vector<std::string>()),
            totalNumberOfRecords(int64_t()),
            hasMoreRecords(bool())
        {
        }

        std::string tableName;
        std::string typeName;
        std::string typeSchema;
        std::vector<std::vector<uint8_t> > recordsBinary;
        std::vector<std::string> recordsJson;
        int64_t totalNumberOfRecords;
        bool hasMoreRecords;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::RawGetRecordsResponse>
    {
        static void encode(Encoder& e, const gpudb::RawGetRecordsResponse& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.typeName);
            ::avro::encode(e, v.typeSchema);
            ::avro::encode(e, v.recordsBinary);
            ::avro::encode(e, v.recordsJson);
            ::avro::encode(e, v.totalNumberOfRecords);
            ::avro::encode(e, v.hasMoreRecords);
        }

        static void decode(Decoder& d, gpudb::RawGetRecordsResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.tableName);
                            break;

                        case 1:
                            ::avro::decode(d, v.typeName);
                            break;

                        case 2:
                            ::avro::decode(d, v.typeSchema);
                            break;

                        case 3:
                            ::avro::decode(d, v.recordsBinary);
                            break;

                        case 4:
                            ::avro::decode(d, v.recordsJson);
                            break;

                        case 5:
                            ::avro::decode(d, v.totalNumberOfRecords);
                            break;

                        case 6:
                            ::avro::decode(d, v.hasMoreRecords);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.typeName);
                ::avro::decode(d, v.typeSchema);
                ::avro::decode(d, v.recordsBinary);
                ::avro::decode(d, v.recordsJson);
                ::avro::decode(d, v.totalNumberOfRecords);
                ::avro::decode(d, v.hasMoreRecords);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #getRecords(const GetRecordsRequest&) const}.
     * <p>
     * Retrieves records from a given table, optionally filtered by an
     * expression and/or sorted by a column. This operation can be performed on
     * tables, views, or on homogeneous collections (collections containing
     * tables of all the same type). Records can be returned encoded as binary,
     * json or geojson.
     * <p>
     * This operation supports paging through the data via the @a offset and @a
     * limit parameters. Note that when paging through a table, if the table
     * (or the underlying table in case of a view) is updated (records are
     * inserted, deleted or modified) the records retrieved may differ between
     * calls based on the updates applied.
     * 
     * @param <T>  The type of object being processed.
     * 
     */
    template<typename T> struct GetRecordsResponse
    {

        /**
         * Constructs a GetRecordsResponse object with default parameter
         * values.
         */
        GetRecordsResponse() :
            tableName(std::string()),
            typeName(std::string()),
            typeSchema(std::string()),
            data(std::vector<T>()),
            totalNumberOfRecords(int64_t()),
            hasMoreRecords(bool())
        {
        }

        std::string tableName;
        std::string typeName;
        std::string typeSchema;
        std::vector<T> data;
        int64_t totalNumberOfRecords;
        bool hasMoreRecords;
    };
}

#endif
