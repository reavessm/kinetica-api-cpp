/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __FILTER_BY_LIST_H__
#define __FILTER_BY_LIST_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #filterByList(const FilterByListRequest&) const}.
     * <p>
     * Calculates which records from a table have values in the given list for
     * the corresponding column. The operation is synchronous, meaning that a
     * response will not be returned until all the objects are fully available.
     * The response payload provides the count of the resulting set. A new
     * resultant set (view) which satisfies the input filter specification is
     * also created if a @a viewName is passed in as part of the request.
     * <p>
     * For example, if a type definition has the columns 'x' and 'y', then a
     * filter by list query with the column map {"x":["10.1", "2.3"],
     * "y":["0.0", "-31.5", "42.0"]} will return the count of all data points
     * whose x and y values match both in the respective x- and y-lists, e.g.,
     * "x = 10.1 and y = 0.0", "x = 2.3 and y = -31.5", etc. However, a record
     * with "x = 10.1 and y = -31.5" or "x = 2.3 and y = 0.0" would not be
     * returned because the values in the given lists do not correspond.
     */
    struct FilterByListRequest
    {

        /**
         * Constructs a FilterByListRequest object with default parameter
         * values.
         */
        FilterByListRequest() :
            tableName(std::string()),
            viewName(std::string()),
            columnValuesMap(std::map<std::string, std::vector<std::string> >()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a FilterByListRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName_  Name of the table to filter.  This may be the
         *                        ID of a collection, table or a result set
         *                        (for chaining queries).  Collections may be
         *                        filtered only if all tables within the
         *                        collection have the same type ID.
         * @param[in] viewName_  If provided, then this will be the name of the
         *                       view containing the results. Has the same
         *                       naming restrictions as <a
         *                       href="../../concepts/tables.html"
         *                       target="_top">tables</a>.
         * @param[in] columnValuesMap_  List of values for the corresponding
         *                              column in the table
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li>
         *                      gpudb::filter_by_list_collection_name: Name of
         *                      a collection which is to contain the newly
         *                      created view. If the collection provided is
         *                      non-existent, the collection will be
         *                      automatically created. If empty, then the newly
         *                      created view will be top-level.
         *                              <li> gpudb::filter_by_list_filter_mode:
         *                      String indicating the filter mode, either
         *                      'in_list' or 'not_in_list'.
         *                      <ul>
         *                              <li> gpudb::filter_by_list_in_list: The
         *                      filter will match all items that are in the
         *                      provided list(s).
         *                              <li> gpudb::filter_by_list_not_in_list:
         *                      The filter will match all items that are not in
         *                      the provided list(s).
         *                      </ul>
         *                      The default value is
         *                      gpudb::filter_by_list_in_list.
         *                      </ul>
         * 
         */
        FilterByListRequest(const std::string& tableName_, const std::string& viewName_, const std::map<std::string, std::vector<std::string> >& columnValuesMap_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            viewName( viewName_ ),
            columnValuesMap( columnValuesMap_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::string viewName;
        std::map<std::string, std::vector<std::string> > columnValuesMap;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::FilterByListRequest>
    {
        static void encode(Encoder& e, const gpudb::FilterByListRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.viewName);
            ::avro::encode(e, v.columnValuesMap);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::FilterByListRequest& v)
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
                            ::avro::decode(d, v.viewName);
                            break;

                        case 2:
                            ::avro::decode(d, v.columnValuesMap);
                            break;

                        case 3:
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
                ::avro::decode(d, v.viewName);
                ::avro::decode(d, v.columnValuesMap);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #filterByList(const FilterByListRequest&) const}.
     * <p>
     * Calculates which records from a table have values in the given list for
     * the corresponding column. The operation is synchronous, meaning that a
     * response will not be returned until all the objects are fully available.
     * The response payload provides the count of the resulting set. A new
     * resultant set (view) which satisfies the input filter specification is
     * also created if a @a viewName is passed in as part of the request.
     * <p>
     * For example, if a type definition has the columns 'x' and 'y', then a
     * filter by list query with the column map {"x":["10.1", "2.3"],
     * "y":["0.0", "-31.5", "42.0"]} will return the count of all data points
     * whose x and y values match both in the respective x- and y-lists, e.g.,
     * "x = 10.1 and y = 0.0", "x = 2.3 and y = -31.5", etc. However, a record
     * with "x = 10.1 and y = -31.5" or "x = 2.3 and y = 0.0" would not be
     * returned because the values in the given lists do not correspond.
     */
    struct FilterByListResponse
    {

        /**
         * Constructs a FilterByListResponse object with default parameter
         * values.
         */
        FilterByListResponse() :
            count(int64_t())
        {
        }

        int64_t count;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::FilterByListResponse>
    {
        static void encode(Encoder& e, const gpudb::FilterByListResponse& v)
        {
            ::avro::encode(e, v.count);
        }

        static void decode(Decoder& d, gpudb::FilterByListResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.count);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.count);
            }
        }
    };
}

#endif
